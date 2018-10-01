#include <bits/stdc++.h>
using namespace std;
int sum(int A[],int n)
{
    int a = INT_MIN;
    int b = 0;
 
    for (int i = 0; i < n; i++)
    {
        b = b + A[i];
        if (a < b)
            a = b;
        if (b < 0)
            b = 0;
    }
    return a;
}
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int A[n];
        for(int j=0; j<n; j++)
        {
            cin>>A[j];
        }
        int res = sum(A,n);
        cout<<res<<"\n";
    }
	return 0;
}
