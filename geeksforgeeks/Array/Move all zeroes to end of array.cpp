//https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array/0
#include <iostream>
using namespace std;
void move_zeroes(int A[], int n)
{
    int count =0;
    for(int i =0; i<n; i++)
    {
        if(A[i]!=0)
        {
            A[count++]= A[i];
        }
    }
    while(count<n)
    {
        A[count++]=0;
    }
}
int main() {
	int t;
	cin>>t;
	for(int i =0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int j=0; j<n; j++)
	    {
	        cin>>A[j];
	    }
	    move_zeroes(A,n);
	    for(int j =0; j<n; j++)
	    {
	        cout<<A[j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
