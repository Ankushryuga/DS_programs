/* implementation of singly link list using class in c++ */
#include<iostream>
class Node{
public:
int data;
Node* next;
Node(){
  data=0;
  next=NULL;
}
  Node(int data){
  this->data=data;
  this->next=NULL;
  }
};
class linklist{
Node* head;
public:
linklist(){
  head=NULL;
} 
  void insertfront(int);
  void insertback(int);
  void insertafter(int,int);
  void deletefront();
  void deleteback();
  void display();
};
void linklist::insertfront(int data){
  Node* newnode=new Node(data);
  if(head==NULL){
  head=newnode;
    newnode->next=NULL;
    return;
  }
  newnode->next=head;
  head=newnode;
}
void linklist::insertback(int data){
Node* newnode=new Node(data);
if(head==NULL){
head=newnode;
newnode->next=NULL;}
Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  newnode->next=NULL;
}

void linklist::display(){
  Node* temp=head;
  while(temp!=NULL){
  std::cout<<temp->data<<" ";
  temp=temp->next;
  }
  std::cout<<"\n";
}
int main(){ 
  linklist list;
  list.insertfront(24);list.insertfront(24);list.insertfront(24);list.insertfront(24);list.insertfront(24);list.insertfront(24);
  list.insertback(77);list.insertback(98);list.insertback(91);list.display();
  return 0;
}







