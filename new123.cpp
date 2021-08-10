#include<iostream>
using namespace std;
class Lovely_Autos
{
	public:
		char manufacturer;
		int model_name;
		int engine_no;
		int chassis_no;
		int year;
		char color;
		void auto();
	{
		cin>>manufacturer>>endl>>maodel_name>>endl>>engine_no>>endl>>year>>endl>>color;
		cout<<manufacturer<<endl<<maodel_name<<endl<<engine_no<<endl<<year<<endl<<color;
	}
};
main(){
Lovely_Autos car;
car.auto();
}



