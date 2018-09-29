
//https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
                Node *temp = head;
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=newNode(data);
			else
			{
				temp->next = newNode(data);
				temp=temp->next;
			}
		}
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}
Node *removeDuplicates(Node *root)
{
    Node *mainroot;
    mainroot = root;
    Node *temp;
    if(root==NULL)
        return 0;
    while(root->next!=NULL)
    {
        if(root->data == root->next->data)
        {
            temp = root->next->next;
            free(root->next);
            root->next = temp;
        }
        else
        {
            root = root->next;
        }
    }
    return mainroot;
   
}
