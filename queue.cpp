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
