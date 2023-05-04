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
}


int queue::dequeue(){
//implementation pending.
}

void queue::display(){
//implementation pending.
}



int main(){
queue q;
q.enqueue(42);q.enqueue(42);q.enqueue(42);q.enqueue(42);
std::cout<<q.dequeue()<<" ";
return 0;
}
