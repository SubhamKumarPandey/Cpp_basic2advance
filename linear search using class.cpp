#include<iostream>
using namespace std;
class student
{
	int a[5];
	public:
		void get();
		void search(int);
};
void student::get()
{cout<<"enter value in array";
	for(int i=0;i<5;i++)
	cin>>a[i];
}
void student::search(int key)
{
	int loc= -1;
	for(int i=0;i<5;i++)
	{
		if(a[i]==key){
			loc=i;
			break;
		}
		if(loc== -1)
		cout<<"ELEMENT NOT FOUND ";
		else
		cout<<"ELEMENT FOUND"<<loc+1;
	}
}
int main()
{
	student s;
	s.get();
	s.search(3);
}















