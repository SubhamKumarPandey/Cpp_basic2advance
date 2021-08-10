#include<iostream>
using namespace std; 

void get_positive(int arr[],int n)
{
	int j=0;
	int data=0;
	int pos[10];
	
		for(int i=0;i<n;i++&&j++){
		if(arr[i]>=data)
		{
		pos[j]=arr[i];
		cout<<"  ";}
	else
	arr[i]=0;
}
	     
	for(int j=0;j<n;j++)
	{
		cout<<pos[j];
	}
	
}
void get_negative(int arr[],int n)
{
	int j=0;
	int data=0;
	int neg[10];
	
		for(int i=0;i<n;i++&&j++){
		if(arr[i]<data)
		{
		neg[j]=arr[i];
		cout<<"  ";
		}
		else
		arr[i]=0;
	}
	     
	for(int j=0;j<n;j++)
	{
		cout<<neg[j];
	}
	
}









int main()
{
	int arr[]={10,20,30,15,-32,-21,26};
	int size=sizeof(arr)/sizeof(arr[0]);
	get_positive(arr,size);
	get_negative(arr,size);
}
