/* stack implementation using linked list in c++ */
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
class stack{
Node* top;
public:
stack(){
top=NULL;
}
void push(int);
  int pop();
  void display();
};

void stack::push(int data){
Node* newnode=new Node(data);
if(top==NULL){
top=newnode;
}
else{
newnode->next=top;
  top=newnode;
}
}

int stack::pop(){
  if(top==NULL){
  return -1;
  }
  int head=top->data;
  Node* temp=top;
  top=top->next;
  delete temp;
  return head;
}
void stack::display(){
Node* temp=top;
while(temp!=NULL){
std::cout<<temp->data<<" \n";
  temp=temp->next;
}
std::cout<<"\n";
}

int main(){
stack s;
s.push(42);s.push(232);s.push(53);s.push(90);
std::cout<<"pop: " <<s.pop();
s.display();
return 0;
}


/*Stack implementation using fixed size array. */

#include<iostream>
#define maxsize 5

class stack{
public:
int top;
int input[maxsize];
 stack(){
 top=0;
 }
  void push(int);
  void pop();
  void display();
};

void stack::push(int data){
  if(top==0){
    input[top]=data;
  }
  top++;
  input[top]=data;
}








