#include<iostream>
using namespace std;
class record
{
	public:
		char name[20];
		int roll_no;
		char city[25];
		int pincode;
		char distric[30];
		int rgion_no;
		int marks;
		void out()
		{
			cin>>name>>endl>>roll_no>>endl>>city>>endl>>pincode>>endl>>distric>>endl>>region_no>>endl>>marks;
			cout<<name\n<<roll_no\n<<city\n<<pincode\n<<distric\n<<region_no\n<<marks;
		};
		main()
		{
			record stu[];
			stu[].out();
		void search()
		{
			int i;
			for(i=0;i<5;i++)
			if(strcmp (stu[i].name,"RAKESH")==0)
			{
			cout<<stu[i].name<<stu[i].marks<<stu[i].distric<<stu[i].pincode<<stu[i].rgion_no
		}
		}
}
