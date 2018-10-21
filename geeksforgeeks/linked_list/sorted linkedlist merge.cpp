//Merging two sorted linkedlists

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
    struct Node *root2 = NULL;
    struct Node *root = NULL;
	srand(time(0)); 
	int n=10;
	int start=1;
	
	for(int i=0;i<n;i++)
	{
		int temp;
		temp= rand()%5 +start +1;
		start=temp;
		root1 = insert(root1,temp);
	}
	print(root1);
	start=1;
	for(int i=0;i<n;i++)
	{
		int temp;
		temp= rand()%5 +start +1;
		start=temp;
		root2 = insert(root2,temp);
	}
	print(root2);
	root = merge(root1,root2);
	print(root);
return 0;
}

