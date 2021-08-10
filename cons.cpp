#include<iostream>
using namespace std;
class area
{
	public:
		int length;
		int breadth;
		area()
		{
			length=20;
			breadth=121;
		}
		void put()
		{
			int area_rectangle;
		cout<<length<<endl<<breadth;
		area_rectangle=length*breadth;	
		cout<<"AREA= "<<area_rectangle;
		}
};
int main()
{ 
area s1;
s1.put();
	
}
