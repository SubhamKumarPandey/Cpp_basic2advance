#include<iostream>
using namespace std;
int main()
{
	int count=10;
	int *pCount=&count;
	double *pi=&count;
	
	cout<<*pCount<<endl<<pCount;
}
