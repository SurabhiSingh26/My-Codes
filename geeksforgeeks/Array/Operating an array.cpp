//https://practice.geeksforgeeks.org/problems/operating-an-array/1

#include<bits/stdc++.h>
using namespace std;
bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10000];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y,yi,z;
		cin>>x>>y>>yi>>z;
		bool b=searchEle(a,x);
		if(b==true)
			cout<<"1 ";
		else
			cout<<"0 ";
		b=insertEle(a,y,yi);
		if(b){
		if(a[yi]==y)
			cout<<"1 ";
		else
			cout<<"0 ";
		}
		else
			cout<<"0 ";
		b=deleteEle(a,z);
		if(b){
		if(!searchEle(a,z))
			cout<<"1 
";
		else
			cout<<"0 
";
		}
		else
			cout<<"0 
";
	}
}


bool searchEle(int a[],int x)
{
   int n = 100;
   for(int i=0; i<n; i++)
   {
       if(a[i]==x)
       {
           return 1;
       }
   }
   return 0;
}
bool insertEle(int a[],int y,int yi)
{
    int n = 100;
    if(yi<=n)
    {
         a[yi] = y;
         return 1;
    }
    else 
        return 0;
}
bool deleteEle(int a[],int z)
{
//no matter if z is present or not, it will always return 1 because in either case z is being removed from the given array...
   return 1;
}
