#include<iostream>
using namespace std;
main()
{
	void *p;
	int  product_number;
	cin>>product_number;
	p=&product_number;
	cout<<*(int*)p<<endl;
	int cost;
	cin>>cost;
	p=&cost;
	cout<<*(int*)p<<endl;
	char supplier_ID;
	cin>>supplier_ID;
	p=&supplier_ID;
	cout<<*(char*)p<<endl;
	char status;
	cin>>status;
	p=&status;
	cout<<*(char*)p;
}
