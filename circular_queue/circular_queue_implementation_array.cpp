/* Implementation of circular queue using array */
#include<iostream>
#define maxsize 5

class circular_queue{
public:
int front, rear;
int array[maxsize];
circular_queue(){
front=-1;
rear=-1;
}
  void enqueue(int);
  int dequeue();
  void display();
};


void circular_queue::enqueue(int data){
  if(front==-1 && rear==-1)
    front=rear=0;
  else if((rear+1)%maxsize==front){
  std::cout<<"Queue is full:\n";
  return;
  }
  else
    rear=(rear+1)%maxsize;
    array[rear]=data;
}


int circular_queue::dequeue(){
  int item;
  if(front==-1 && rear==-1){
  std::cout<<"Queue is empty:\n";
    return -1;
  }
  else if(front==rear){
  front=rear=-1;
  }
  else
  item=array[front];
  front=(front+1)%maxsize;
  return item;
}

void circular_queue::display(){
int count=((rear+maxsize-front)%maxsize)+1;
  for(int i=0;i<count;i++){
  std::cout<<array[front+i]%maxsize<<" ";
  }
  std::cout<<"\n";
}

int main(){
circular_queue cq;
  cq.enqueue(3);cq.enqueue(4);cq.enqueue(5);cq.enqueue(6);cq.enqueue(7);cq.display();
  std::cout<<"Dequeued: "<<cq.dequeue()<<"\n ";cq.display();
  cq.enqueue(8);cq.display();
  return 0;
}

/*
3 4 5 6 7
3
4 5 6 7
4 5 6 7 8
*/
