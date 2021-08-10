#include<iostream>
using namespace std;
class add
{
	public:
		int a[5],i;
		int sum=0;
		void get()
		{
			for(i=0;i<5;i++)
			{
				cin>>a[i];
			}
		}
		void su()
		{
			for(i=0;i<5;i++){
			sum=sum+a[i];}
			cout<<"SUM IS"<<sum;
		}
};
int main()
{
	add no;
	no.get();
	no.su();
}
