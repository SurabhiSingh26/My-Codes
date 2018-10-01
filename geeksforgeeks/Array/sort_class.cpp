#include<bits/stdc++.h>
using namespace std;
class Student 
{
	public:
	int rollno;
	int mark;
};
bool marksort(Student A, Student B)
{
	if(A.mark>B.mark)
		return 1;
	else 
		return 0;		
}
int main()
{
	Student all[5];
	
	all[0].rollno=2;
	all[0].mark=10;
	
	all[1].rollno=1;
	all[1].mark=50;
	
	all[2].rollno=7;
	all[2].mark=35;
	
	all[3].rollno=5;
	all[3].mark =40;
	
	all[4].rollno=3;
	all[4].mark =20;
	sort(all,all+5,marksort);
	for(int i=0;i<5;i++)
	{
		cout<<all[i].rollno<<" -- "<<all[i].mark<<"\n";
	}
	return 0;
}
