#include<bits/stdc++.h>

using namespace std;

class Node{
  public:
  
  int val;
  Node* next;

  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};

int main()
{
//   Node head(10)
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);

  head->next=a;
  a->next=b;

  // cout<<head->val<<endl;
  // cout<<a->val<<endl;
  // cout<<head->next->val<<endl;
  cout<<&head<<endl;
  cout<<head->val<<endl;
  cout<<head->next<<endl;
  cout<<&a<<endl;
  cout<<head->next->val<<endl;
  cout<<head->next->next<<endl;
  cout<<a->val<<endl;
  cout<<&b<<endl;
  cout<<head->next->next<<endl;
  cout<<head->next->next->next<<endl;
  cout<<head->next->next->val<<endl;
    return 0;
}