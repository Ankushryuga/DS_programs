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
  public:
  doublylinklist(){
  head=tail=NULL;
  }
  void insertfront(int);
  void insertback(int);
  void display();
  bool is_empty();
  int lengthlist();
  int deletefront();
  int deleteback();
  int search(int);
  void totalNodes();
};


// insert at front in the linked list::
void doublylinklist::insertfront(int value){
  Node* newnode=new Node(value);
  if(head==NULL){
    head=tail=newnode;
  }
  else{
    
  }
}




