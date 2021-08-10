#include<iostream>
using namespace std;
int main()
{int a[5];
	int large=a[0];
	for(int i=0;i<5;i++)
	{
	cin>>a[i];
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	cout<<"largest value is"<<large;
}
