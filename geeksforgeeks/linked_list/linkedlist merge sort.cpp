#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	Node(int d)
	{
		data=d;
		next=NULL;
	}
};

void print(Node *root)
{
	cout<<"\n";
	while(root!=NULL)
	{
		cout<<root->data<<"->";
		root = root->next;
	}
	cout<<"\n";
}


Node *merge(Node *root1, Node *root2)
{
	struct Node *root = NULL;
	Node *mainroot = root;
	if(root1== NULL)
		return root2;
	if(root2==NULL)
		return root1;	
	if(root1->data>root2->data)	
	{
		root = root2;
	    root2 = root2->next;
	    root->next = NULL;
	}
	else
	{
		root = root1;
		root1 = root1->next;
		root->next = NULL;
	}
	mainroot = root;
	//print(root);
	while(root1!=NULL && root2 !=NULL )
	{
		if(root1->data>root2->data)
		{
			root->next = root2;
			root2 = root2->next;
		}
		else
		{
			root->next = root1;
			root1 = root1->next;
		}
		root=root->next;
		root->next=NULL;
		//print(mainroot);
	}
	//print(mainroot);
	if(root1== NULL)
		root->next= root2;
	if(root2==NULL)
	    root->next= root1;
return mainroot;	
}


Node *divide(Node *root)
{
	Node *root1 = root;
	if(root==NULL)
		return root;
	if(root->next==NULL)
		return root1;
	Node *root2 = root->next->next;
	while(root2!=NULL&&root2->next!=NULL)
	{
		root1 = root1->next;
		root2 = root2->next->next;
	}
	return root1;
}

Node *merge_sort(Node *root)
{
	Node *center = divide(root);
	if(root!=center)
	{
		Node *first= root;
		Node *second=center->next;
		center->next=NULL;
		first= merge_sort(first);
		second=merge_sort(second);
		root= merge(first,second);
	}
	Node *first= root;
	Node *second=center->next;
	center->next=NULL;
	root= merge(first,second);
	return root;
}

Node * insert(Node *root, int temp)
{
    Node *newnode= new Node(temp);
    Node *mainroot = root;
	if(root == NULL)
	{
		root = newnode;
		return root;
	}
	else
	{
		while(root->next!=NULL)
		{
			root = root->next;
		}
        root->next = newnode;
	}
	
return mainroot;
}


int main()
{
    struct Node *root1= NULL;
    struct Node *root = NULL;
	srand(time(0)); 
	int n=10;
	int start=1;
	for(int i=0;i<n;i++)
	{
		int temp;
		temp= rand()%100 + 1;
		start=temp;
		root1 = insert(root1,temp);
	}
	print(root1);
	root = merge_sort(root1);
	print(root);
return 0;
}
