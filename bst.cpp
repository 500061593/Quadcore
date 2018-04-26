#include<iostream>
using namespace std;
//making struct pointer
struct node{
int data;
node * left;
node * right;
};
struct node * func(node * root,int data){

if(root==NULL)
root->data=data;
root->left=NULL;
root->right=NULL;
}
//making function
void pre(node * root,int data){
if(root==NULL)
return ;
cout<<root->data;
pre(root->left);
pre(root->right);
}
void in(node * root,int data){
if(root==NULL)
return 0;
in(root->left);
cout<<root->data;
in(root->right);
}
void post(node * root,int data){
if(root==NULL)
return 0;
post(root->left);
post(root->right);
cout<<root->data;//function for post traversal 
}
void insert(node * root,int data){
if(root==NULL)
root->data=data;
else if(data>root)
root->right=data;
else
root->left=data;
}
int main(){
struct node *root  = newNode(1);
     root->left             = newNode(2);//inserting values
     root->right           = newNode(3);//second value
     root->left->left     = newNode(4);//third one
     root->left->right   = newNode(5);

    cout<<"preorder";
     Pre(root);

     cout<<"Inorder traversal of binary tree is";
     In(root);

     cout<<"Postorder traversal of binary tree is";
     Post(root);


     return 0;
}

