//https://practice.geeksforgeeks.org/problems/max-sum-in-the-configuration/1
#include<bits/stdc++.h>
using namespace std;
int max_sum(int A[],int N);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/
    }
}
int max_sum(int A[],int N)
{
    
    int max_sum = INT_MIN;
    for(int i =0; i<N; i++)
    {
        int sum = 0;
        for(int j=0;j<N;j++)
        {
            int index = (i+j)%N;
            sum = sum + j*A[index];
        }
        if(sum>max_sum)
        {
            max_sum = sum;
        }
    }
    return max_sum;
}
