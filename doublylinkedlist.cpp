#include<iostream>
using namespace std;
class Node{
public:
	Node*prev;
	int data;
	Node*next;
	Node(int d){
		this->prev=NULL;
		this->data=d;
		this->next=NULL;
	}
};
Node*head=NULL;
Node*tail=NULL;
void traversal()
{
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int length()
{
	int count=0;
	Node*temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}


void insertAtHead(int data){
	//node creation
	Node*newnode=new Node(data);
	//ll is empty
	if(head==NULL && tail==NULL)
		head=tail=newnode;
	else{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}

}
void insertAtTail(int data){
	Node*newnode=new Node(data);;
	if(head==NULL && tail==NULL)
		tail=head=newnode;
	else{
		Node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
		tail=newnode;
	}
}
void insertAtRandom(int pos,int data){
	if(pos==1)
	{
		insertAtHead(data);
		return;
	}
	if(pos==length()){
		insertAtTail(data);
		return;
	}
	Node*newnode=new Node(data);
	Node*temp=head;
	for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next->prev=newnode;
	temp->next=newnode;
	newnode->prev=temp;
}
void deletionATHead(){
	Node*temp=head;
	if(head==NULL)
	{
		cout<<"underflow condition"<<endl;
		return;
	}
	if(head->next==NULL)
	{

		head=NULL;
	
	return;
	}
	else{
		head=head->next;
		head->prev=NULL;
		temp->next=NULL;
		free(temp);
	}
}
void deletionAtTail(){
	if(head==NULL){
		cout<<"underflow condition"<<endl;
		return;
	}
	if(head->next==NULL){
		head=NULL;
		return;
	}
	Node*temp=head;
	while(temp->next->next!=NULL)
		temp=temp->next;
	Node*current=temp->next;
	temp->next=NULL;
	current->prev=NULL;
	tail=temp;
	free(current);
}
void deletionAtRandom(int pos)
{
	if(pos==1){
		deletionATHead();
		return;
	}
	if(pos==length()){
		deletionAtTail();
		return;
	}
	Node*temp=head;
	for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	Node*current;
	current=temp->next;
	temp->next=current->next;
	current->next->prev=current->prev;
	current->next=NULL;
	current->prev=NULL;
	free(current);
}
int main(){
	insertAtHead(10);
	insertAtHead(20);
	insertAtHead(30);
	insertAtHead(40);
	traversal();
	insertAtTail(50);
	insertAtTail(60);
	insertAtTail(70);
	traversal();
	insertAtRandom(4,1000);
	insertAtRandom(1,2000);
	insertAtRandom(9,3000);
	traversal();
	deletionATHead();
	traversal();
	deletionAtTail();
	traversal();
	deletionAtRandom(4);
	traversal();

}