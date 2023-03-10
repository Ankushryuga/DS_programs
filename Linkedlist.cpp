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
