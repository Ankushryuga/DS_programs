// circular doubly linked list implementation in c++ using class.
/*Circular doubly linked list is a DS that consists of a collection of nodes, where each node stores a value and has 2 pointers that point to the previous and next nodes in the list. In circular doubly linked list, the last nodes points to the first node, creating a cicular structure.
*/
/* implementation of circular doubly linked list using class in c++ */
#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        data=0;
        next=prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=this->prev=NULL;
    }
};
class circulardoubly{
    Node* head;
    Node* tail;
    public:
    circulardoubly(){
        head=tail=NULL;
    }
    void insertfront(int);
    void insertback(int);
    void insertafter(int,int);
    void deletefront();
    void deleteback();
    void display();
};
void circulardoubly::insertfront(int data){
    Node* newnode=new Node(data);
    if(head==NULL){
        head=tail=newnode;
        tail->next=head;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    tail->next=newnode;
    head=newnode;
}
void circulardoubly::insertback(int data){
    Node* newnode=new Node(data);
    if(tail==NULL){
        head=tail=newnode;
        newnode->next=head;
        return;
    }
    newnode->next=head;
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}
void circulardoubly::insertafter(int element, int newelement){
    Node* newnode=new Node(newelement);
    Node* temp=head;
    do{
        if(temp->data==element){
            newnode->next=temp->next;
            newnode->prev=temp;
            temp->next=newnode;
            if(temp==tail){
                tail=newnode;
            }
        }
        temp=temp->next;
    }while(temp!=head);
}
void circulardoubly::deletefront(){
    if(tail==NULL){
        std::cout<<"List is empty: \n";
        return;
    }
    Node* temp=head;
    head=head->next;
    tail->next=temp->next;
    std::cout<<"Front was: "<<temp->data<<" \n";
    delete temp;
}
void circulardoubly::deleteback(){
    if(head==NULL){
        std::cout<<"List is empty: \n";
        return;
    }
    Node* temp=tail;
    std::cout<<"Back was: "<<temp->data<<"\n";
    tail=tail->prev;
    tail->next=head;
    head->prev=tail;
    delete temp;

}

void circulardoubly::display(){
    Node* temp=head;
    do{
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    std::cout<<"\n";
}
int main(){
    circulardoubly cd;
    cd.insertback(24);cd.insertback(65);cd.insertback(99);cd.insertfront(88);cd.insertfront(77);
    cd.insertafter(24,19999);cd.insertfront(484);cd.insertback(88);cd.insertfront(77);
    cd.display();
    cd.deletefront();cd.deleteback();
    cd.display();
    return 0;
}
