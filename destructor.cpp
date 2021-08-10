#include<iostream>
using namespace std;
class test
{
	public:
		test()
		{
			cout<<"obj created";
		}
		~test()
		{
			cout<<"obj destroyed";
		}
};
int main()
{
	cout<<"inside main"<<endl;
	test t1;
	{
		cout<<"inside block"<<endl;
		test t3;
		cout<<"leaving block"<<endl;
		test t2;
	}
	cout<<"back inside main"<<endl;
}
