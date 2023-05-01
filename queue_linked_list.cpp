/* implementation of queue using linked list  */
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


class queue{
Node* front;
  Node* rear;
  public:
  queue(){
    front=NULL;
    rear=NULL;
  }
  
  void enqueue(int);
  int dequeue();
  void display();
};
