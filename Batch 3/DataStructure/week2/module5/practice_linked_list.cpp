#include<bits/stdc++.h>

using namespace std;

class Node{
  public:
  
  int val;
  Node* next;

  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};

int main()
{
 Node* head = new Node(10);
 Node* a = new Node(20);
 Node* b = new Node(30);
 Node* c = new Node(40);
 Node* d = new Node(50);
 
 head->next =a;
 a->next = b;
 b->next = c;
 c->next = d;
 d->next=NULL;

Node* tmp = head;

while(tmp != NULL)
{
    cout<<tmp->val<<endl;   // head not null 10
    tmp = tmp->next;        // a    not null 20
}                           // b  not null 30
                            // c  not null 40
// Node* tmps = head;       // d not null 50  

// while(tmps != NULL)
// {
//     cout<<tmps->val<<endl;
//     tmps = tmps->next;
// }

// second step
//  Node a(10);
//  Node b(20);

//  a.next = &b;
//  b.next=NULL;

//  cout<<a.val<<endl; 
//  cout<<a.next->val<<endl; 
//  cout<<b.val<<endl; 
//  cout<<(*a.next).val<<endl;

// first step
//  Node a;
//  Node b;

//  a.val = 10;
//  b.val = 20;

//  a.next = &b;
//  b.next=NULL;

//  cout<<a.val<<endl; 
//  cout<<a.next->val<<endl; 
//  cout<<b.val<<endl; 
//  cout<<(*a.next).val<<endl;

    return 0;
}