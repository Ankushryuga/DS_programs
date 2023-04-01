#include<iostream>
class Node{
	public:
	int data;
	Node* next;
	Node* prev;
	Node(){
		data=0;
		next=NULL;
		prev=NULL;
	}
	Node(int data){
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
	}
};
class doublylinklist{
	Node* head;
	Node* tail;
	int size=0;
	public:
	doublylinklist(){
		head=tail=NULL;
		size=0;
	}
	void insertfront(int); //done
	void insertback(int); //done
//	void insertafter(int,int);
	int deletefront(); // done
	int deleteback(); // done
	//int deletespecified(int);
	void search(int); //done
	void display(); //done
	int length(); // done
	bool is_empty(); // done
};
// insert at begin of dll.
void doublylinklist::insertfront(int data){
Node* newnode=new Node(data);
if(head==NULL){
	head=tail=newnode;
//	return;
}
else{
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}
size++;
}
// insert at the end..
void doublylinklist::insertback(int data){
	Node* newnode=new Node(data);
	if(tail==NULL){
		head=tail=newnode;
	//	return;
	}
	else{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
	size++;
}
// insert after specified node..
/*
void doublylinklist::insertafter(int element, int newelement){
	Node* newnode=new Node(newelement);
	Node* temp=head;
	while(temp->data!=element){
		temp=temp->next;
	}
}
*/
//delete front..
int doublylinklist::deletefront(){
	if(!is_empty()){
	if(head==tail){
		tail=NULL;
	//	return ;
	}
	Node* temp=head;
	int delelement=temp->data;
	head=head->next;
	delete temp;
	size--;
	return delelement;
	}
	return 0;
} 
// delete back.
int doublylinklist::deleteback(){
	if(!is_empty()){
	if(tail==tail){
		head=NULL;
	//	return;
	}
	Node* temp=tail;
	int delelement=temp->data;
	tail=tail->prev;
	tail->next=NULL;
	delete temp;
	size--;
	return delelement;
	}
	return 0;
}

// search an element 
void doublylinklist::search(int value){
	Node* temp=head;
	while(temp!=NULL){
	  if(temp->data==value){
	    std::cout<<"Element is available: "<<std::endl;
	  }
	  temp=temp->next;
	}
}
// check list is not empty..
bool doublylinklist::is_empty(){
	if(size<=0){
		return true;
	}
	return false;
}
// total nodes..
int doublylinklist::length(){
	return size;
}


void doublylinklist::display(){
	Node* temp=head;
	while(temp!=NULL){
		std::cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	doublylinklist *ob=new doublylinklist();
	ob->insertfront(24);
	ob->insertback(42);
	ob->display();
	ob->search(42);
	std::cout<<"Total Nodes: "<<ob->length();
	std::cout<<"Is Empty()"<<ob->is_empty();
	
	ob->deletefront();
	ob->deleteback();
	ob->search(42);
	std::cout<<"Total Nodes: "<<ob->length();
	std::cout<<"Is Empty()"<<ob->is_empty();
	ob->display();
	return 0;
}


















