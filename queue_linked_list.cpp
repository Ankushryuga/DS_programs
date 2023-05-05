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


void queue::enqueue(int data){
//implementation pending.
  Node* newnode=new Node(data);
  if(rear!=NULL){
    newnode->next=rear;
    rear=newnode;
  }
}

int queue::dequeue(){
//implementation pending.
  int item=front->data;
  Node* temp=front;
  front=front->next;
  std::cout<<"Front was: "<<item<<" \n";
  std::cout<<"Front now: "<<front->data<<"\n";
  delete temp;
  return item;
}

void queue::display(){
//implementation pending.
  Node* temp=front;
  while(temp!=rear){
  std::cout<<temp->data<<" ";
    temp=temp->next;
  }
  std::cout<<"\n";
}



int main(){
queue q;
q.enqueue(42);q.enqueue(42);q.enqueue(42);q.enqueue(42);
std::cout<<q.dequeue()<<" ";
q.display();
return 0;
}
