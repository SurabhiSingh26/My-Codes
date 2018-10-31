#include<iostream>
#include<cstring>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

void transpose(vector <vector<int> > &A)
{
	int r = A.size();
	int c = A[0].size();
	for(int i=0; i<r; i++)
	{
		for(int j=i; j<c; j++)
		{
			swap(A[i][j],A[j][i]);
		}
	}
}

int main()
{
	int n = 5;
	vector <vector<int> > A(n,vector<int>(n,0));
	srand(time(NULL));
	for(int i = 0; i<n; i++)
	{
		for(int j =0; j<n; j++)
		{
			A[i][j] = rand()%10; 
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n\n\n";
	transpose(A);
	for(int i = 0; i<n; i++)
	{
		for(int j =0; j<n; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
