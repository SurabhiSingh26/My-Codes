//https://practice.geeksforgeeks.org/problems/finding-number/0
#include <iostream>
using namespace std;
int find_index(int A[], int n,int k)
{
    for(int i = 0;i<n;i++)
    {
        if(A[i]==k)
        {
            return i;
        }
    }
    return -1;
}
int main() {
	int t;
    cin>>t;
	for(int i =0; i<t; i++)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int j =0; j<n; j++)
	    {
	        cin>>A[j];
      }
	    int k;
	    cin>>k;
	    int res = find_index(A,n,k);
	    cout<<res<<"\n";
	}
	return 0;
}
