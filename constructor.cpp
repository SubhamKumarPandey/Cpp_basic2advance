#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		int marks;
		student()
		{
			cout<<"ENTER ROLL NO AND MARKS";
			cin>>roll>>marks;
			
		}
		void put()
		{
		cout<<roll<<endl<<marks;	
		}
};
int main()
{ student s1,s2;
s1.put();
	
}
