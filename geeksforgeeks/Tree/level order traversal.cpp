#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int d = 0)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

Node *insert(Node *root, int data)
{
	if(root == NULL)
	{
		return new Node(data);
	}
	
	if(data>=root->data)
	{
		root->right = insert(root->right,data);
	}
	else
	{
		root->left = insert(root->left, data);
	}
	return root;
}



void BFS(Node *root)
{
	queue <Node *> a;
	if(root==NULL)
	{
		return;
	}
	else
	{
		a.push(root);
		while(!a.empty())
		{
			int size=a.size();
			for(int i = 0; i<size; i++)
			{
				Node *temp = a.front();
				cout<<temp->data<<", ";
				a.pop();
				if(temp->left!=NULL)
				a.push(temp->left);
				if(temp->right!=NULL)
				a.push(temp->right);
			}
			cout<<"\n";
		}
	}
	
}

int main()
{
	Node *root = NULL;
	int data;
	for(int i =0; i<5; i++)
	{
		cin>>data;
		root = insert(root,data);
	}
	BFS(root);
}
