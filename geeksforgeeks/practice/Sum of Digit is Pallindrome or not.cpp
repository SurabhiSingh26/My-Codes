//https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not/0

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int sum =0;
	   int digit;
	   int rev =0;
	    while(n!=0)
	    {
	       int rem = n%10;
	       sum = sum+rem;
	       n = n/10;
	    }
	    int num = sum;
	    do
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        } while (num != 0);
        
        if(sum==rev)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
