/* Implementation of queue using array */
#include<iostream>
#define maxsize 5


class queue{
int front, rear, size;
public:
  int array[maxsize];
queue(){
front=rear=size=0;
}
void enqueue(int);
int dequeue();
void display();
};

void queue::enqueue(int data){
  if(rear>=maxsize){
    std::cout<<"Queue is full: \n";
    return;
  }
  rear++;
  array[rear]=data;
}



















/* Note: - in normal queue there is lot of memory leakage thats why different types of queue implemented to overcome this issue.for example circular queue, priority queue, Dequeue.

*/


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

class Queue{
Node* front;
Node* rear;
public:
Queue(){
front=NULL;
rear=NULL;
}};
  

