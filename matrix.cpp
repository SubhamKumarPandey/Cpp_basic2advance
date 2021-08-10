#include<iostream>
using namespace std;
int main()
{
	int row=3,col=3,arr[100][100];
	cout<<"enter matrix";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	for(int j=0;j<col;j++){
		for(int i=row-1;i>=0;i--)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
