#include<iostream>
using namespace std;
class students
{
	int marks;
	public:
		students(){
		}
		students(int x){
			marks=x;
		}
};
int main()
{
	students s1(100);
	students s2();
	students s3=100;
	return 0;
	}

