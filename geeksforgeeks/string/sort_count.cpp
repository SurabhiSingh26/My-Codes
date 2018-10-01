
#include<bits/stdc++.h>
using namespace std;

bool increase(vector <int> A, vector <int> B)
{
	if(A[1]>B[1])
		return 1;
	else
		return 0;
}

string countstr(string s)
{
	int A[26] = {0};
	int index;
	
	for(int i=0; i<s.length(); i++)
	{
			index = s[i]-'a';
			A[index]= A[index] +1;
	}
	cout<<"\n";
	
	vector <vector <int> >B(26,vector <int> (2));
	for(int i=0;i<26;i++)
	{
		B[i][0]=i;
		B[i][1]=A[i];
	}
	sort(B.begin(),B.end(),increase);
	int i =0;
	string res="";
	while(B[i][1]!=0 && i<26)
	{
		index = B[i][0];
		char ch= index +'a';
		res+=ch;
		//res.append(1,ch);
		i++;
	}
	
	return res;
	
}
int main()
{
	string s;
	cin>>s;
	string res=countstr(s);
	cout<<"\n"<<res;
	return 0;
}
