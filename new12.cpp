#include<iostream>
using namespace std;
int main()
{
	int n,arr[100];
    int i=0;
	cout<<"Enter Number to convert Decimal to Binary";
	cin>>n;
	while(n>0)
	{
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<arr[j];
	}
}
