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

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,n,qu[10],front,rare,v,visit[10],visited[10];

main()//code by anubhav singh
{
int m;
cout <<"enterno of vertices";
cin >> n;
cout <<"ente no of edges";
cin >> m;
cout <<"\nEDGES \n";
for(k=1;k<=m;k++)
{
cin >>i>>j;
cost[i][j]=1;
}

cout <<"enter initial vertex";
cin >>v;
cout <<"Visitied vertices\n";
cout << v;
visited[v]=1;
k=1;
while(k<n)//entered while loop for functoining
{
for(j=1;j<=n;j++)
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
qu[rare++]=j;
}
v=qu[front++];
cout<<v << " ";
k++;
visit[v]=0; visited[v]=1;
}
}


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int cost[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10];
 
main()
{
int m;
cout <<"enterno of vertices";
cin >> n;
cout <<"ente no of edges";
cin >> m;
cout <<"\nEDGES \n";
for(k=1;k<=m;k++)
{
cin >>i>>j;
cost[i][j]=1;
}
 
cout <<"enter initial vertex";
cin >>v;
cout <<"ORDER OF VISITED VERTICES";
cout << v <<" ";
visited[v]=1;
k=1;
while(k<n)
{
for(j=n;j>=1;j--)
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
stk[top]=j;
top++;
}
v=stk[--top];
cout<<v << " ";
k++;
visit[v]=0; visited[v]=1;
}
}
