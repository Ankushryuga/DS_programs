/* Implementation of queue using array: */

#include<iostream>
#define maxsize 5

class queue{
public:
int front,rear;
int array[maxsize];
queue(){
front=-1;
rear=-1;
}
void enqueue(int);
int dequeue();
void display();
};

void queue::enqueue(int data){
  if(rear==maxsize-1){
  std::cout<<"Queue is full:\n";
  return;
  }
  else{
  if(front==-1)
    front=0;
   rear++;
    array[rear]=data;
  }
}


int queue::dequeue(){
if(front==-1){
  std::cout<<"Queue is empty: \n";
  return -1;
}
  else{
    int item=array[front];
    front++;
    return item;
  }
}


void queue::display(){
  for(int i=front;i<=rear;i++){
  std::cout<<array[i]<<" ";
  }
  std::cout<<"\n";
}



int main(){
queue q;
  q.enqueue(24);q.enqueue(4);q.enqueue(53);q.enqueue(77);q.enqueue(131);q.display();
  std::cout<<"Dequeued data: "<<q.dequeue()<<"\n";
  q.display();
return 0;
}

/*
24
4
53
77
131

24

4
53
77
131
*/
