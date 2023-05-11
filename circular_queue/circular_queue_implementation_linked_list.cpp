/* Implementation of circular queue using linked list */
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
