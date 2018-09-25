#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node * next;
};
class Stack
{
	Node *root;
	int size;
	public:
		Stack()
		{
			root=NULL;
			size=0;
		}
		void push(int a)
		{
			Node *temp=new Node;
			temp->data=a;
			temp->next=root;
			root=temp;
			size++;
			//cout<<root->data;
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
	Stack st;
	st.push(5);
	st.print();
	
	st.push(4);
	st.push(3);
	st.print();
	st.pop();
	cout<<"\n"<<st.top()<<"\n";
	st.push(7);
	st.print();
	
	return 0;
}

