/* Binary search tree 
left subtree is either equal to or less than root.
right subtree is either equal to or greater than roo.
*/

#include<iostream>
class Node{
public:
int data;
Node* left;
Node* right;
Node(){
data=0;
left=NULL;
right;
}
Node(int data){
this->data=data;
this->left=NULL;
this->right=NULL;
}};

class BST{
Node* root;
public:
BST(){
root=NULL;
}
};
