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
cout <<"Visitied vertices\n";
cout << v;
visited[v]=1;
k=1;
while(k<n)
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
