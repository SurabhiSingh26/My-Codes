#include <bits/stdc++.h>
using namespace std;
long smallest(int n, int d)
{
    int A[n]={0};
    A[0]=1;
    d = d-1;
    for(int i =1; i<n; i++)
    {
        if(d>=9)
        {
            A[n-i] = 9;
            d = d-9;
        }
        else
        {
              A[n-i] = d;
              d = 0;
        }
}
A[0]+=d;
long sum =0;
for(int i =0; i<n; i++)
{
   sum = sum*10 + A[i]; 
}
return sum;
}


long largest(int n, int d)
{
	int a;
	long l = 0;
	for(int i =1; i<=n; i++)
	{
		if(d>=9)
		{
		   a = 9;
		   l = l*10 + a;
		}
		else
		{
			if(d>0)
			{
			    a = d;
			    l = l*10 + a;
			}
			else
			{
			    l = l*10;
			}
			
		}
		d = d-a;
		
		//cout<<l<<" ,,";
	}
	return l;
}
int main()
{
	int n, d;
	cin>>n>>d;
	long res;
	res = largest(n,d);
	cout<<res;
	cout<<"\n";
	res = smallest(n,d);
	cout<<res;
	
}
