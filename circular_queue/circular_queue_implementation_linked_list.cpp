/* Implementation of circular queue using linked list */
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

class circular_queue{
Node* front;
Node* rear;
public:
circular_queue(){
front=rear=NULL;
}
  void enqueue(int);
  int dequeue();
  void display();
};


void circular_queue::enqueue(int data){
Node* newnode=new Node(data);
  if(rear==NULL){
  front=rear=newnode;
  newnode->next=NULL;
  }
  else{
  rear->next=newnode;
    newnode->next=NULL;
    rear=newnode;
  }
}


int circular_queue::dequeue(){
  int item;
  if(front==NULL){
    std::cout<<"circular queue is empty:\n";
    return -1;
  }else{
  Node* temp=front;
    item=temp->data;
    front=front->next;
    delete temp;
  }
  return item;
}

void circular_queue::display(){
Node* temp=front;
  while(temp!=NULL){
  std::cout<<temp->data<<" ";
  temp=temp->next;
  }
  std::cout<<"\n";
}

int main(){
circular_queue cq;
  cq.enqueue(11);cq.enqueue(12);cq.enqueue(13);cq.enqueue(14);cq.enqueue(15);cq.display();
  cq.dequeue();cq.display();cq.enqueue(16);cq.enqueue(17);cq.display();
  return 0;
}

/*
11 12 13 14 15
12 13 14 15
12 13 14 15 16 17
*/
