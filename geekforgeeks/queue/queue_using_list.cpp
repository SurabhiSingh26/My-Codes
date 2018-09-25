#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node * next;
};
class Queue
{
	Node *root;
	Node *end;
	int size;
	public:
		Queue()
		{
			root=NULL;
			end=NULL;
			size=0;
		}
		void push(int a)
		{
			Node *temp=new Node;
			temp->data=a;
			temp->next=NULL;
			if(end==NULL)
			{
				end=temp;
				root=temp;
			}
			else
			{
				end->next=temp;
				end=end->next;
			}
			size++;
		}
		int top()
		{
			return root->data;
		}
		void pop()
		{
			Node *temp=root;
			root=root->next;
			delete temp;
			size--;
		}
		int getsize()
		{
			return size;
		}
		void print()
		{
			cout<<"\n";
			Node *temp=root;
			while(temp!=NULL)
			{
				cout<<temp->data<<" , ";
				temp=temp->next;
			}
		}
};
int main()
{
	Queue q;
	q.push(5);
	q.print();
	
	q.push(4);
	q.push(3);
	q.print();
	q.pop();
	cout<<"\n"<<q.top()<<"\n";
	q.push(7);
	q.print();
	
	return 0;
}

