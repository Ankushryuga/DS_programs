#include<iostream>
class Node{
  public:
   int data;
   Node* next;
  Node(int data){
    this->data=data;
  }
  
  Node* takeInput(){
    int data;
    Node* head=NULL;
    Node* tail=NULL;
    cin>>data;
    while(data!=-1){
      Node* newNode=new Node(data);
      if(head==NULL){
        head=newNode;
        tail=newNode;
      }
    }
  }
};

////////////////////////  MODIFIED CODE:::
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
class linklist{
  Node* head;
public:
  linklist(){
    head=NULL;
  }
  void insertdata(int);
  void displaylist();
  int lengthoflist();
};

void linklist::insertdata(int data){
  Node* newnode=new Node(data);
  if(head==NULL){
    head=newnode;
    return;
  }
  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
}


void linklist::displaylist(){
  Node* temp=head;
  while(temp!=NULL){
    std::cout<<temp->data<<" ";
    temp=temp->next;
  }
}


int linklist::lengthoflist(){
  int len=0;
  Node* temp=head;
  while(temp!=NULL){
    len++;
    temp=temp->next;
  }
  return len;
}

int main(){
  linklist list;
  list.insertdata(14);
  list.insertdata(14);
  list.insertdata(14);
  list.insertdata(14);
  list.insertdata(14);
  list.insertdata(14);list.insertdata(14);
  list.insertdata(14);
  std::cout<<"displaying list:\n";
  list.displaylist();
  std::cout<<"Length of list is: "<<list.lengthoflist()<<" "; 

  return 0;
}
















