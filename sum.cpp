#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int sum=0;
	cout<<"ENTER NO TO BE ADDED";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"sum is"<<sum;
}
