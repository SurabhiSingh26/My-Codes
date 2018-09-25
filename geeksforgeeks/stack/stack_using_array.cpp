#include<bits/stdc++.h>
using namespace std;

class Stack
{
	int *A;
	int size;
	public:
		Stack(int maxsize=1000)
		{
			A=new int[maxsize];
			size=0;
		}
		void push(int a)
		{
			A[size]=a;
			size++;
			//cout<<root->data;
		}
		int top()
		{
			return A[size-1];
		}
		void pop()
		{
			size--;
		}
		int getsize()
		{
			return size;
		}
		void print()
		{
			cout<<"\n";
			for(int i=0;i<size;i++)
			cout<<A[i]<<" , ";
		}
};
int main()
{
	int maxsize=100;
	Stack st(maxsize);
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
