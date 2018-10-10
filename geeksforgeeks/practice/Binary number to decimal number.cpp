//https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number/0

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int count = 1;
	    int sum =0;
	    if(n==0)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	    while(n!=0)
	    {
	        if(n%10!=0)
	            sum = sum + count;
	        count = count*2;
	        n = n/10;
	    }
	    cout<<sum<<endl;
	    }
	}
	return 0;
}
