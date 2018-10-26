#include<bits/stdc++.h>
using namespace std;

int main()
{
	int maxprofit=0;
	//8 2 6 4 5 9 3 4 10 1
	
	int stock;
	cin>>stock;
	int minval = stock;
	while(stock!=-1)
	{
		cin>>stock;
		
		if(minval>stock)
		{
			minval = stock;
			if(stock-minval > maxprofit)
				maxprofit = stock - minval;
					
		}
		else
		{
			if(stock-minval > maxprofit)
				maxprofit = stock - minval;
		}
		
		cout<<"\n Max value of stock profit is : "<<maxprofit<<"\n";
	}
	return 0;
}
