/* Implementation of queue using array and linked list */
#include<iostream>
#define maxsize 5

class queue{
public:
int data;
int front;
int rear;
queue(){
data=front=rear=0;
}
  void insert();
  void delete();
  void display();
};
