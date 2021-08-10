#include<iostream>
using namespace std;

	struct node{
		int data;
		struct node *next;
	}*head;
	void end_del(){
		int n;
		cout<<endl<<"Enter you want to display elemnt from end";
		cin>>n;
      struct node *t,*temp;
      temp=head;
      t=head;
      int count=1;
      while(count<=n-1){
      	temp=temp->next;
      	count=count+1;
      	
	  }
	  while(temp->next !=NULL){
	  	temp=temp->next;
	  	t=t->next;
	  }
	  cout<<t->data;
	}
 void linklist()
{
int count=0;
	struct node *temp;
	head=0;
	int choice=1;
	while(choice){
		struct node *newnode;
		newnode=new node;
		cout<<"ENTER DATA:";
		cin>>newnode->data;
		newnode->next=0;
		if(head==0){
			head=newnode;
			temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"	Do You Want To Continue. 0/N or 1/Y??";
		cin>>choice;
	}
	temp=head;
	while(temp!=0){
		cout<<temp->data<<endl;
		temp=temp->next;
	//	count++;
	}
	

}

void insert(){
	
	struct node *newnode;
	
	//	struct node *newnode;
		newnode=new node;
		cout<<"ENTER DATA:";
		cin>>newnode->data;
		newnode->next=head;
		head=newnode;
		cout<<"data inserted successfully"<<endl;
	
}
void insert_end(){
	struct node *newnode,*temp;
	newnode=new node;
	cout<<"ENTER DATA";
	cin>>newnode->data;
	newnode->next=0;
	temp=head;
	while(temp->next !=0){
		temp=temp->next;
		
	}
	temp->next=newnode;
}
void display(){
	struct node *temp;
	int count=0;
	if(head==NULL){
		cout<<"list is empty";
	}
	else{
		temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"  ";
			temp=temp->next;
			count++;
		}
	}
	cout<<"no of node"<<count;
}
void insert_pos(){
	int pos;
	int i=1;
	struct node *newnode,*temp;
	newnode= new node;
	cout<<"ENTER POSITON YOU WANT TO INSERT DATA";
	cin>>pos;
	temp=head;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	cout<<"ENTER DATA AT SPECIFIED POSITION";
	cin>>newnode->data;
	newnode->next=temp->next;
	temp->next=newnode;
}
void del(){
	struct node *temp;
	temp=head;
	head=head->next;
	delete(temp);
}
void del_end(){
	struct node *prev,*temp;
	temp=head;
	while(temp->next!=0){
		prev=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=0;
		delete(temp);
	}
	else{
		prev->next=0;
		delete(temp);
	}
}
void del_pos(){
	struct node *temp,*nextnode;
	int pos,i=1;
	temp=head;
	cout<<"ENTER POSITION";
	cin>>pos;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	delete(nextnode);
	
}















int main(){
	int count;
	int flag;
	// n2ew();
	 linklist();
	 display();
	 end_del();
	 //display();
	 //cout<<endl<<"to Insert data at beg "<<endl;
	 //insert();
	 
	 //display();
	 //cout<<endl<<" Insert data at end "<<endl;
	 //insert_end();
	 /*display();
	 cout<<"INSERT AT SPECIFIC POSITION"<<endl;
	 insert_pos();
	 display();
	 
	 
	 cout<<endl<<"to Delete data at beg "<<endl;
	 del();
	 
	 display();
	 cout<<endl<<" delete data at end "<<endl;
	 del_end();
	 display();
	 cout<<"DELETE AT SPECIFIC POSITION"<<endl;
	 del_pos();
	 display();
	 */
}
