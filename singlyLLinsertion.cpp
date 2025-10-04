#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node*next;
	Node(int d){
		data=d;
		next=NULL;
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
void insertionAtHead(int data){
	//creation of node 
	Node *newnode=new Node(data);
	//ll is empty
	if(head==NULL && tail==NULL)
		tail=head=newnode;
	else{
		//ll is not empty
		newnode->next=head;
		head=newnode;
	}	
}
void insertionAtTail(int data)
{
	//creation of node
	Node*newnode=new Node(data);
	//ll is empty
	if(head==NULL && tail==NULL)
		head=tail=newnode;
	else{
		tail->next=newnode;
		tail=newnode;
	}
}
void insertAtRandom(int data,int pos)
{
	//create node 
	Node*newnode=new Node(data);
	//INSERT AT POSITION 1 
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
		return;
	}
	Node*temp=head;
	for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
bool searching(int data)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		if(temp->data==data)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
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
void deletionAtHead()
{
	if(head==NULL){
		cout<<"underflow condition"<<endl;
		return;
	}
	if(head->next==NULL)
	{
		head=NULL;
		return;
	}
	Node*temp=head;
	head=head->next;
	free(temp);
}
void deletionAtTail()
{
	Node*temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	tail=temp;
}
void deletionRandom(int pos)
{
	if(pos==1)
	{
		deletionAtHead();
		return;
	}
	if(pos==length())
	{
		deletionAtTail();
		return;
	}
	Node*temp=head;
	for(int i=1;i<pos-1;i++)
		temp=temp->next;
	Node*current=temp->next;
	temp->next=current->next;
	current->next=NULL;
	free(current);
}
int main()
{
	insertionAtHead(10);
	insertionAtHead(20);
	insertionAtHead(30);
	insertionAtHead(40);
	insertionAtTail(11);
	insertionAtTail(12);
	insertionAtTail(13);
	insertAtRandom(100,4);
	insertAtRandom(1000,1);
	insertAtRandom(2000,9);
	insertAtRandom(3000,11);
	traversal();
	cout<<endl;
	// if(searching(3000))
	// 	cout<<"element is present"<<endl;
	// else
	// 	cout<<"element is not present"<<endl;
    // cout<<"length of linkedlist "<<length();
    deletionAtHead();
    deletionAtHead();
    deletionAtHead();
    deletionAtHead();
    deletionAtHead();
    traversal();
    deletionAtTail();
    traversal();
    deletionRandom(3);
    traversal();


}