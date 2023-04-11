// circular doubly linked list implementation in c++ using class.
/*Circular doubly linked list is a DS that consists of a collection of nodes, where each node stores a value and has 2 pointers that point to the previous and next nodes in the list. In circular doubly linked list, the last nodes points to the first node, creating a cicular structure.
*/
/* implementation of circular doubly linked list using class in c++ */
/* implementation of circular doubly link list using class in c++ */
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
        this->next=NULL;
        this->prev=NULL;
    }
};
class cdlinklist{
    Node* head;
    Node* tail;
    public:
    cdlinklist(){
        head=tail=NULL;
    }
    void insertfront(int);void insertback(int);void insertafter(int,int);void deletefront();void deleteback();
    void display();void reverse();
};

void cdlinklist::insertfront(int data){
    Node* newnode=new Node(data);
    if(head==NULL){
        head=tail=newnode;
        newnode->next=newnode;
        newnode->prev=newnode;
        return;
    }
    newnode->next=head;
    newnode->prev=tail;
    tail->next=newnode;
    head=newnode;
}

void cdlinklist::insertback(int data){
    Node* newnode=new Node(data);
    if(tail==NULL){
        head=tail=newnode;
        newnode->next=newnode;
        newnode->prev=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void cdlinklist::insertafter(int element, int newelement){
    Node* newnode=new Node(newelement);
    Node* temp=head;
    do{
        if(temp->data==element){
            temp->next->prev=newnode;
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

void cdlinklist::deletefront(){
    if(head==NULL){std::cout<<"List is empty: \n";return;}
    else if(head->next==head){
        std::cout<<"only 1 element in list: "<<head->data<<" \n";
        delete head;
        return;
    }
    Node* temp=head;
    head=head->next;
    head->prev=tail;
    tail->next=head;
    std::cout<<"Front was: "<<temp->data<<" \n";
    delete temp;
}
void cdlinklist::deleteback(){
    if(head==NULL){std::cout<<"List is empty:\n";return;}
    else if(head->next==head){
        std::cout<<"Only 1 element in the list: "<<head->data<<" \n";
        delete head;
        return;
    }
    Node* temp=tail;
    tail=tail->prev;
    temp->prev->next=head;
    head->prev=tail;
    std::cout<<"Tail was: "<<temp->data<<" \n"<<"Tail now: "<<tail->data<<" \n";
}


void cdlinklist::display(){
    Node* temp=head;
    do{
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    std::cout<<"\n";
}
void cdlinklist::reverse(){
    std::cout<<"Tail is: "<<tail->data;
}
int main(){
    cdlinklist list;
    list.insertfront(242);list.insertback(24);list.insertfront(29);list.insertfront(90);list.insertfront(888);
   
    list.insertafter(242,104225);list.display();
    //list.insertback(104225); list.display();
    list.deletefront();list.deleteback();list.display();//list.reverse();
    return 0;
}
