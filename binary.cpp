#include<iostream>
using namespace std;
int main()
{
	int sum=0,i,j,no,pow=1,n;
	cout<<"enter bit in your binary digit";
	cin>>n;
	int arr[n],arr2[n];
	for(i=0;i<n;i++){
		cin>>no;
		if(no==0||no==1){
			arr[i]=no;
		}
		else{
			cout<<"invaid input";
		}
	}
	for(j=0;j<n;j++){
		if(pow>1){
			arr2[j]=pow*arr[j];
			pow=pow*2;
		}
		else{
				arr2[j]=pow*arr[j];
			pow=pow*2;
			
		}
	}
	for(i=0;i<n;i++){
		sum=sum+arr2[i];
	}
	cout<<"decimal no. is:"<<sum;
}
