#include<bits/stdc++.h>

using namespace std;

class Node{
  public:

  int val;
  Node* next;
};

int main()
{
  Node a,b,c;

  a.val=10;
  b.val=20;
  c.val=30;

  a.next=&b;
  b.next=&c;
  c.next=NULL;

  // cout<<a.val<<endl;
  // cout<<b.val<<endl;
  // cout<<(*a.next).val<<endl;
  // cout<<a.next->next<<endl;
  // cout<<&b<<endl;
  // cout<<&c<<endl;
  // cout<<a.val<<endl;
   cout<<a.val<<endl;
   cout<<a.next<<endl;
   cout<<&b<<endl;
   cout<<a.next->val<<endl;
   cout<<a.next->next<<endl;
   cout<<&c<<endl;
   cout<<a.next->next->val<<endl;
   cout<<a.next->next->next<<endl;
   cout<<&c<<endl;

    return 0;
}