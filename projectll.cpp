#include<iostream>
using namespace std;

	struct node{
		int data;
		struct node *next;
	}*head;
 void linklist()
{

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
	if(head==NULL){
		cout<<"list is empty";
	}
	else{
		temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"  ";
			temp=temp->next;
		}
	}
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
	int i=1;
	while(i){
	int choice;
	cout<<"                    ENTER YOU CHOICE:"<<endl<<endl<<endl<<"Press  1 To Create Data "<<endl<<"Press  2 To Insert at Beg "<<endl<<"Press  3 To Insert at End  "<<endl<<"Press  4 To Insert at Given Position  "<<endl<<"Press  5 To Delete at Beg "<<endl<<"Press  6 To Delete at End "<<endl<<"Press  7 To Delete at Given Position ";
cin>>choice;
switch(choice){
	case 1:
		linklist();
		display();
		break;
	case 2:
		insert();
		display();
		break;
	case 3:
		insert_end();
		display();
		break;
	case 4:
		insert_pos();
		display();
		break;
	case 5:
		del();
		display();
		break;
	case 6:
		del_end();
		display();
		break;
	case 7:
		del_pos();
		display();
		break;
	default:
	cout<<"Enter Valid Choice";
}
cout<<"Do You want TO Continue"<<endl<<"1/Y OR 0/N"<<endl;
cin>>i;
}
}
