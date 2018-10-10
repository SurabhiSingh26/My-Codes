//https://practice.geeksforgeeks.org/problems/print-the-kth-digit/0

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a, b, k;
	    cin>>a>>b>>k;
	    long num = pow(a,b);
	    int rem;
	    while(k--)
	    {
	        rem = num%10;
	        num = num/10;
	    }
	    cout<<rem<<endl;
	    
	}
	return 0;
}
