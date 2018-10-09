//https://practice.geeksforgeeks.org/problems/armstrong-numbers/0

#include <iostream>
#include <math.h>
using namespace std;

int main() {
		int t; 
	cin>>t;
	int n;
	while(t--)
	{
	    cin>>n;
	    int num = n;
	    int count =0;
	    int sum =0;
	    while(num!=0)
	    {
	        num = num/10;
	        count++;
	    }
	    int num1 = n;
	    while(num1!=0)
	    {
	        int rem = num1%10;
	        sum = sum + pow(rem,count);
	        num1 = num1/10;
	    }
	    //cout<<sum<<" ";
	    if(sum==n)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    
	}
	
	return 0;
}
