/* Implementation of queue using array */

#include<iostream>
class Queue{
public:
int front, rear, size;
unsigned capacity;
  Queue(){
    front=rear=size=0;
    capacity=0;
  }
  Queue* createQueue(unsigned);
  void enqueue(Queue*, int);
  int dequeue(Queue*);
};
