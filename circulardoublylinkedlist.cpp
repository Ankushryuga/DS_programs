// circular doubly linked list implementation in c++ using class.
/*Circular doubly linked list is a DS that consists of a collection of nodes, where each node stores a value and has 2 pointers that point to the previous and next nodes in the list. In circular doubly linked list, the last nodes points to the first node, creating a cicular structure.
*/

#include<iostream>
class Node{
	public:
	int data;
	Node* next;
	Node* prev;
	Node(){
		data=0;
		next=prev=NULL;
	}
	Node(int data){
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
	}
};

class circulardoublylinkedlist{
	Node* head;
	Node* tail;
	public:
	circulardoublylinkedlist(){
		head=tail=NULL;
	}
	void insertfront(int);
	void insertend(int);
	int deletefront();
	int deleteback();
	void display();
	void traverseback();
};

// insert at front of cdll;
void circulardoublylinkedlist::insertfront(int data){
	Node* newnode=new Node(data);
	if(head==NULL){
		head=tail=newnode;
		newnode->next=newnode;
		newnode->prev=newnode;
	}
	else{
		newnode->next=head;
		newnode->prev=head->prev;
		head->prev->next=newnode;
		head->prev=newnode;
		head=newnode;
	}
}
// insert at the end of cdll.
void circulardoublylinkedlist::insertend(int data){
	Node* newnode=new Node(data);
	if(tail==NULL){
		head=tail=newnode;
		newnode->next=newnode;
		newnode->prev=newnode;
	}
	else{
		tail->next=newnode;
		newnode->prev=tail;
		newnode->next=head;
		tail=newnode;
	}
}


void circulardoublylinkedlist::display(){
	Node* temp=head;
	do{
		std::cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);
	std::cout<<"\n";
}
void circulardoublylinkedlist::traverseback(){
	Node* temp=tail;
	do{
		std::cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=tail);
	std::cout<<"\n";
}

//delete front...
int circulardoublylinkedlist::deletefront(){
	int del;
	if(head==NULL){
		std::cout<<"List is empty"<<"\n";
		return 0;
	}else if(head->next==head){
		del=head->data;
		delete head;
		head=NULL;
		return del;
	}
	else{
		Node* temp=head;
		del=temp->data;
		head=head->next;
		head->prev=temp->prev;
		tail->next=head;
		//temp->prev->next=head;
		delete temp;
		return del;
	}
	return 0;
}



int main(){
	circulardoublylinkedlist dll;
	dll.insertfront(24);dll.insertfront(24);dll.insertfront(24);
	dll.insertend(42);
	dll.display();
	dll.traverseback();
	std::cout<<dll.deletefront()<<"\n";
	dll.display();
	dll.traverseback();
	return 0;
	
}
