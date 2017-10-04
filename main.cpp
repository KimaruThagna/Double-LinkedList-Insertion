struct node{
  node *before;
  int data;
  node *next;
};

#include <iostream>
#include <cstddef>
using namespace std;



int main()
{
  node *n;
  node *t;//trailing pointer
  node *h;//head pointer....first item on the list
  int size;
  int item;
  int i;
  node *p;


  cout << "How many items are in your list?" << endl;
  cin >> size;
  if(size==0)
  {
     cout<<"The List is empty" <<endl;
  }
    else if(size==1)
    {
         n = new node;
  cout << "Enter the first item: " << endl;
  cin >> item;
  n->data = item;
  n->next=NULL;
  cout<<"The list contains::"<<+item<<endl;
    }
    else
    {
       n = new node;
  cout << "Enter the first item: " << endl;
  cin >> item;
  n->data = item;
  t = n;//t and h ...pointers to the location of the first node
  h = n;
  n->before=h;
  for (i = 1; i<size-1; i++){
  n = new node;//creates new node and assigns the location of the node to the pointer n
  cout << "Enter the next item: " << endl;
  cin >> item;
  n->before=t;
  n->data = item;
  t->next = n;//assigning the location of the new node to the link field of the previous node
  t = t->next;//location of current node
  }
  n = new node;
  cout << "Enter the last item: " << endl;
  cin >> item;
  n->before=t;
  n->data = item;
  t->next = n;
  n->next=NULL;//terminate the list

  cout << "The list contains:" << endl;
//node *p;//the moving pointer that will traverse all the nodes
p=h;
  while (p!=NULL){
  cout << p->data << " ";
  p = p->next;
  //move to the link field of the next node
  }
  cout<<endl;
    }
    int ipos,ivalue;
cout<<"Ennter insertion position"<<endl;
cin>>ipos;
cout<<"Enter Insertion Value"<<endl;
cin>>ivalue;
p=h;
while(p!=NULL)
{
 if(p->data==ipos)
 {
     n=new node;
     n->next=p;
     n->data=ivalue;
     n->before=p->before;
     (p->before)->next=n;
     p->before=n;

     cout<<"Updated linked list"<<endl;
     p=h;
  while (p!=NULL){
  cout << p->data << " ";
  p = p->next;

  }
  cout<<endl;
 }
 else
{p=p->next;}
}
p=h;
cout<<"Insertion at point 0"<<endl;
cout<<"Enter value"<<endl;
cin>>ivalue;
n=new node;
n->data=ivalue;
n->before=NULL;
n->next=p;
h=n;
  cout<<"Updated linked list"<<endl;
     p=h;
  while (p!=NULL){
  cout << p->data << " ";
  p = p->next;

  }
  cout<<endl;
   p=NULL;
  n=NULL;
  t=NULL;
    return 0;
}
