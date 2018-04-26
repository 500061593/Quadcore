#include<iostream>
using namespace std ;
int sea(int*,int,int);
void ins (int*,int);
void del (int*,int);
void sorti (int*,int);
void display (int*,int);

int main ()
{
    int a[10],s,c,i,k;
    cout<<"enter size of the array, where size<=10"<<endl; cin>>s;
    cout<<"enter the array"<<endl;
    for (i=0;i<s;i++)
        cin>>a[i];
    cout<<"ARRAY FUNCTION MENU-> 1.SEARCH 2.INSERTION 3.DELETION 4.SORTING(ASC)"<<endl;
    cout<<" ENTER CHOICE"<<endl; cin>>c;
    switch (c)
    {    case 1 :  cout<<"enter search item"<<endl; cin>>k;
                  int p=sea(&a[0],s,k);
                  if (p==0)
                  cout<<"no such element present"<<endl;
                  else
                  cout<<"position of the element is "<<endl<<p<<endl;
                  break;
        case 2 : ins (a,s);
                 break;
        case 3 : del (&a[0],s);
                 break;
        case 4 : sorti (&a[0],s);
                  break;
        default: cout<<"invalid choice"<<endl;
    }
return 0;
}

int sea (int *a,int s,int k)
{   int i,o=0;
    for (i=0;i<s;i++)
    {     if (*a==k)
          {  o=i+1;
             break;
          }
        a++;
    }
return o;
}

void ins (int *a,int s)
{    int pos=0,i,k,*l;
    l=a;
    if (s>=10)
    { cout<<"no space"<<endl; return; }
    cout<<"enter the element and its position to be inserted"<<endl; cin>>k>>pos;
    if (pos<1&&pos>10)
    { cout<<"invalid position"<<endl; return; }
    for (i=s;i>(pos-1);i--)
    {
      *(a+i)=*((a+i)-1);
    }
    *(a+(pos-1))=k; s++;
 display (l,s);
}

void del (int *a,int s)
{  int i,k,p,*l;
    l=a;
    if (s<=0)
    { cout<<"nothing to delete"<<endl; return;}
   cout<<"enter item to be deleted"<<endl cin>>k;
   p=sea (a,s,k);
    if (p==0)
    {cout<<"no such element present"<<endl; return;}
   for (i=(p-1);i<(s-1);i++)
     {*(a+i)=*((a+i)+1);}
    s--;
    display(l,s);
}

void sorti (int *a,int s)
{
    int i,j,*l,t;
    l=a;
    for (i=0;i<s;i++)
    {  a=l;
        for (j=0;j<(s-i);j++)
        {  if (*a>*(a+1))
             { t=*a; *a=*(a+1); *(a+1)=t;}
           a++;
        }
    }
display (l,s);
}

void display (int *a,int s)
{  cout<< "array is"<<endl;
    int i;
   for (i=0;i<=(s-1);i++)
   { cout<<*a<<endl;
       a++;}
}

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
cout<<root->data;
//function for post traversal 
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
     root->left             = newNode(2) //inserting values
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

#include<new>
#include<cstdlib>
using namespace std ;
 struct node
{
    int k;
    struct node* next;
}*nptr,*st,*ptr,*r;

node* cnn(int ); //for new node
void insb (node*);//insertion in the beginning for stack
void inse (node*);//insertion in the end for queue
void disp (node*);//for displaying the list
void dele ();//for deletion at the beginning

int main()
{ int inf,kp; char ch='y';
   st==NULL; nptr=NULL;
  cout<<"ENTER CHOICE 1. STACK, 2. QUEUE"<<endl; cin>>kp; 

if (kp==1)
 { while (ch=='y')
   {    cout<<"enter info of new node"<<endl; cin>>inf;
       nptr= cnn(inf);
      if (nptr==NULL){ return -1; }
      insb (nptr);
      cout<<"inserted at the beginning"<<endl;
      cout<<"do you want to continue, enter y for yes"<<endl; cin>>ch;
   }
  do
   {cout<<"do you want to perform deletion at the beginning,enter y for yes"<<endl; cin>>ch;
   if (ch=='y')
    dele (); }while (ch=='y'); }

else if (kp==2)
{   while (ch=='y')
   {   cout<<"enter info of new node"<<endl; cin>>inf;
       nptr= cnn(inf);
       if(nptr==NULL)
       {
           cout<<"no space available"<<endl; exit(1);
       }
      inse (nptr);
      cout<<"inserted at the end"<<endl;
      cout<<" do you want to continue, enter y for yes"<<endl; cin>>ch;
   }
   do
  {cout<<"do you want to perform deletion at the beginning,enter y for yes"<<endl; cin>>ch;
   if (ch=='y')
    dele ();}while(ch=='y'); }

 cout<<"here is your list"<<endl;
 disp(st);
delete st,nptr,r;
return 0;
}

node* cnn (int n)
{ try
{ptr=new node;}
catch (bad_alloc xa)
{ cout <<"Allocation Failure"<<endl; return NULL ;} //checks if there is any space in heap memory
     ptr->k=n;
     ptr->next=NULL;
return ptr;
}

void insb ( node* np)
{  if (st==NULL)
    st=np;
   else
   { ptr=st;
     st=np;
     np->next=ptr;
   }
}

void inse (node* np)
{  if (st==NULL)
    st=r=np;
   else
   { r->next=np;
     r=np;
   }
}

void disp (struct node* np)
{   while (np)
     { cout<<np->k<<endl;
       np=np->next;
      }

}

void dele ()
{ ptr=NULL;
  if (st==NULL)
  {
      cout<<"underflow,start again"<<endl; exit (1);
  }
  ptr=st;
  st=st->next;
  delete ptr;
return ;}


