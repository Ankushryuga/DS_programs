/* Implementation of queue using array */
#include<iostream>
#define maxsize 5


class queue{
int front, rear, size;
public:
queue(){
front=rear=size=0;
}
void enqueue(int);
int dequeue();
void display();
};
