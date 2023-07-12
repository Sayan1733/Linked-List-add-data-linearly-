//Linked list
#include<iostream>
using namespace std;
class node{
	public:
		int data;			//Data Part
		node* next;			//Pointer part
		node(int val){		//inserting value using constructor
			data=val;
			next=NULL;
		}
};

void insertathead(node* &head,int val){
	node* n=new node(val);			//Assigning a memory and value or 
									//Assigning a data field[data->NUll]
	n->next=head;					//shifting head element to next 
	head=n;							//assign new value in head
}

void insertattail(node* &head,int val){
	node* n = new node(val);		//Assigning a data field[data->NUll]
	
	if(head==NULL){					//Checking if head is null or not
		head=n;
		return;
	}
	
	node* temp=head;			//new node name as temp and assign head
	while(temp->next!=NULL){	//iterate till NULL
		temp=temp->next;
	}
	temp->next=n;				//last node assign value
	
}

void display(node* head){
	node* temp=head;			//assign temp to head
	while(temp!=NULL){				//iterate to display data
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

bool search(node* head,int key){
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
int main(){
	node* head=NULL;
	int n1,n2,i;
	cout<<"Enter 1 to add data in head or 2 to add data in tail"<<endl;
	cin>>i;
	if(i==1){
			do{
			cout<<"Type 0 to terminate the print"<<endl;
			cin>>n1;
			insertathead(head,n1);
		}while(n1!=0);
	}
	else if(i==2){
		do{
			cout<<"Type 0 to terminate the print"<<endl;
			cin>>n2;
			insertattail(head,n2);
		}while(n2!=0);
	}
	else{
		cout<<"You entered wrong choice"<<endl;
	}
	
	display(head);
	int key;					//start of searching
	cout<<"Enter the data for searching:";
	cin>>key;
	if(search(head,key)){
		cout<<"TRUE"<<endl;
	}
	else{
		cout<<"FALSE"<<endl;
	}						//end of seacrching
	return 0;
}
