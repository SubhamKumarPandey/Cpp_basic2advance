#include<iostream>
using namespace std;
class a
{
	int a;
	int b;
	public:
		void show(){
		cin>>a;
		cin>>b;}
		void display()
		{
			cout<<"A is="<<a;
			cout<<"B is="<<b;
		}
};
int main()
{
	a obj;
	obj.show();
	obj.display();
}
