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

void insert_list(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
     if(head==NULL)
     {
       head =  newNode;
       tail = newNode;
       return;
     }
  
    //   tail->next = newNode;
    //  tail->next->prev = tail;
    //   tail = newNode;
     tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
    
}

int main()
{
  Node* head=NULL;
  Node* tail=NULL;
  int val;
  while(true)
  {
    cin>>val;
     if(val==-1) break;

    insert_list(head, tail, val);
  }

   print_from_left(head);
   print_from_right(tail);
    return 0;
}