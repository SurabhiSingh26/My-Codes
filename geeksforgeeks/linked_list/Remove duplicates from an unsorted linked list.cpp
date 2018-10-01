//https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
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
		struct Node *head = NULL;
        struct Node *temp = head;
 
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
    Node *a = root;
    Node *b;
    Node *c;
    
    while(a!=NULL && a->next != NULL)
    {
        b = a;
        while(b!= NULL && b->next != NULL)
        {
            if(a->data==b->next->data)
            {
                c = b->next;
                b->next = b->next->next;
                free(c);
            }
            else
            {
                b = b->next;
            }
        }
        a = a->next;
    }
    return root;
}
