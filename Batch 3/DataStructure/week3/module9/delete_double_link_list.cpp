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
int size(Node* head)
{
     Node* tmp = head;
     int count = 0;
     while(tmp != NULL)
     {
        count++;
        tmp = tmp->next;
     }
     return count;
}

void delete_at_head(Node* &head)
{
  Node* tmp = head;
  Node* deleted = tmp;
  head = head->next;
}
void delete_at_tail( Node* &tail)
{
//   Node* tmp = tail;
//  Node* deleted= tmp;
//   tmp = tmp->prev;
//   tmp->next = NULL;
//    delete deleted;

  Node* deleted= tail;
  tail = tail->prev;
  delete deleted;
//    if (tail == NULL)
//     {
//         head = NULL;
//         return;
//     }
  tail->next = NULL;
}

void delete_at_position(Node* head, int pos)
{
   Node* tmp = head;
   for(int i=1; i<=pos-1; i++)
   {
      tmp = tmp->next;
   }
   Node* deleted = tmp->next;
   tmp->next = tmp->next->next;
   tmp->next->prev=tmp;
   delete deleted;
}

void print_from_left(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl;
}
void print_from_right(Node* tail)
{
    Node* tmp = tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->prev;
    }
    cout<<endl;
}
int main()
{
    // Node* head = NULL;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
  
  int pos;
  cin>>pos;
   if(pos==0)
   {
     delete_at_head(head);
   }else if(pos>=size(head))
   {
     cout<<"Invalid"<<endl;
   }else if(pos==size(head)-1)
   {
      delete_at_tail( tail);
   }else{
     delete_at_position(head, pos);
   }


    print_from_left(head);
    print_from_right(tail);

    return 0;
}