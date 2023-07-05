#include<bits/stdc++.h>

using namespace std;

class Node{
  public:
  
  int val;
  Node* next;
  Node* prev;

  Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
  }
};

int size(Node* head){
    Node* tmp = head;
   int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void inset_at_head(Node* &head,Node*&tail, int val)
{ 
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        tail = newNode;
        head= newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    if(tail == NULL)
    {
        tail = newNode;
        head= newNode;
        return;
    }
    
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void insert_at_position(Node* head, Node* tail,int pos, int val)
{
  Node* newNode = new Node(val);
  Node* tmp = head;
    
    for(int i=1; i<=pos-1; i++)
    {
       tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev=tmp;
    newNode->next->prev = newNode;
}

void print_from_right(Node* tail)
{
    Node* tmp = tail;

    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;   
    }
       cout<<endl;
}

void print_from_left(Node* head)
{
   Node* tmp = head;

   while(tmp != NULL)
   {
      cout<<tmp->val<<" ";
      tmp = tmp->next;
   }
   cout<<endl;

}

int main()
{
 Node* head = new Node(10);
 Node* a = new Node(20); 
 Node* b = new Node(30); 
 Node* c = new Node(40); 
 Node* d = new Node(50);
Node* tail = d; 

head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
c->next=d;
d->prev=c;

int pos, val;
cin>>pos>>val;

if(pos==0)
{
   inset_at_head(head, tail, val);
}else if(pos>size(head))
{
   cout<<"Invalid"<<endl;
}else if(pos == size(head))
{
  insert_at_tail(head, tail, val);
}
else{
 insert_at_position(head,tail,pos,val);
}

 print_from_left(head);
 print_from_right(tail);

    return 0;
}