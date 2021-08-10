	struct node{
		int data;
		struct node *next;
	}*head;
	void end_del(){
		int n;
		cout<<"Enter you want to display elemnt from end";
		cin>>n;
      struct node *p,*f;
      p=head;
      f=head;
      int count=1;
      while(count<=n-1){
      	f=f->next;
      	count=count+1;
      	
	  }
	  while(f->next !=NULL){
	  	f=f->next;
	  	p=p->next;
	  }
	  cout<<p;
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

int main(){
	int count;
	int flag;
	// n2ew();
	 linklist();
	 display();
	 end_del();
}
