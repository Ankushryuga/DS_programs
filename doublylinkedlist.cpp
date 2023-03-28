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
class linkedlist{
Node* head;
Node* tail;
  public:
  linkedlist(){
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
