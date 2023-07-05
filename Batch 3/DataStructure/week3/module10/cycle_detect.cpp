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
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);

  head->next =a;
  a->next=b;
  b->next=head;

  Node* fast = head;
  Node* slow = head;
  
  bool flag = false;

  while(fast != NULL && fast->next != NULL)
  {
    fast = fast->next->next;
    slow = slow->next;

    if(fast == slow)
    {
        flag = true;
        break;
    }
  }

 if(flag==true)
 {
    cout<<"Cycle is detect"<<endl;
 }else{
    cout<<"Cycle not detected"<<endl;
 }

    return 0;
}