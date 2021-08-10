#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		int marks;
		student()
		{
			roll=20;
			marks=121;
		}
		student(int x,int y)
		{
			roll=x;
			marks=y;
		}
		void put()
		{
		cout<<roll<<endl<<marks;	
		}
};
int main()
{ 
student s1;
student s2(32,400);
student s3(21,231);
s1.put();
s2.put();
s3.put();
	
}
