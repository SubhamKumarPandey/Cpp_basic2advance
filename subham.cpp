#include<iostream>
using namespace std;
class K19GE
{
	public:
		int roll_no,attendence;
		void input()
		{
	cout<<"Enter Roll No And Attendence And Marks";
	cin>>roll_no>>attendence>>marks;
	output();
	}
	private:
		float marks;
		output()
		{
			cout<<marks;
		}
		
};
main()
{
	K19GE ex[3];
	for(int i=0;i<3;i++)
	{
		cout<<"stdent"<<i+1<<"details"<<endl;
	ex[i].input();
}
}