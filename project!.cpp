#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};
 

 	struct node *head=0,*temp;
 	
 	void insert_data()
 	{
 	int choice=1;
 	int count=0;
 	while(choice)
 	{
 		struct node *newnode;
	 newnode=new node;
 	cout<<"Enter New Data"<<"  ";
	 cin>>newnode->data;
	 newnode->next=0;
	 if(head==0)
	 {
	 	head=temp=newnode;
		 }	
		 else{
		 	temp->next=newnode;
		 	temp=newnode;
		 	
		 }
		 cout<<"Do You Want To Enter More Data('0/1'?)";
		 cin>>choice;
 		
	 }
 
 }
 void view_data()
 {
 	int count=0;
 	 temp=head;
	 while(temp!=0)
	 {
	 	cout<<temp->data<<"  ";
	 	temp=temp->next;
	 	count++;
	 }
	 cout<<endl<<"Total Data in list:"<<"  "<<count;
 }
 void insert_end()
 {
 	struct node *newnode;
 	newnode=new node;
 	cout<<endl<<"Enter Data";
 	cin>>newnode->data;
 	newnode->next=0;
 	temp=head;
 	while(temp->next!=0)
 	{
 		temp=temp->next;
	 }
	 temp->next=newnode;	
 }
 void insert_beg(){
 	struct node *newnode;
 	newnode=new node;
 	cout<<endl<<"Enter data to be inserted";
 	cin>>newnode->data;
 	newnode->next=head;
 	head=newnode;
 }
 void insert_rendom()
 {
 	int pos,i=1;
 	struct node *newnode;
 	newnode=new node;
 	cout<<endl<<"Enter data to be inserted at position";
 	cin>>pos;

	
 	temp=head;
 	while(i<pos)
 	{
 		temp=temp->next;
 		i++;
	 }
	cout<< endl<<"Enter data to be inserted:";
	cin>>newnode->data;
	newnode->next=temp->next;
	temp->next=newnode;

 }
 void del_beg()
 {
 	temp=head;
 	head=head->next;
 	delete(temp);
 }
 void del_end(){
 	struct node *prevnode;
 	temp=head;
 	while(temp->next!=0)
 	{
 		
		 prevnode=temp;
		 temp=temp->next;
	 }
	 if(temp==head){
	 	head=0;
	 	delete(temp);
	 }
	 else{
	 	prevnode->next=0;
	 	delete(temp);
	 }
 }
 void del_rendom(){
 	struct node *nextnode;
 	int i=1,pos;
 	temp=head;
 	cout<<"Enter Postion at which you want to delete data"<<endl;
 	cin>>pos;
 	while(i<pos-1){
 		temp=temp->next;
 		i++;
	 }
	 nextnode=temp->next;
	 temp->next=nextnode->next;
	 delete(nextnode);
 }
 
 
 
 
 
 
 
  main()
 {
  
  insert_data();
 view_data();
  insert_end();
  view_data();
  insert_beg();
  view_data(); 
  insert_rendom();
  view_data();
  del_beg();
  del_end();
  del_rendom();
  view_data();
 }
