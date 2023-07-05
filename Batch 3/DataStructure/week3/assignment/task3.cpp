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
void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head= newNode;
        tail= newNode;
    }
   
   tail->next = newNode;
   tail = newNode;
   
}
void insert_at_head(Node* &head, Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail= newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void print_list(Node* head)
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
  Node* head = NULL;
  Node* tail = NULL;
  Node* head2 = NULL;
  Node* tail2 = NULL;
  bool flag =  true;

  int val;  
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head,tail, val);
    insert_at_head(head2,tail2, val);
  }
  // print_list(head);
  // print_list(head2);

  Node* tmp = head;
  Node* tmp2 = head2;

  while(tmp != NULL && tmp2!= NULL)
  {
     if(tmp->val != tmp2->val)
     {
        flag =false;
        break;
     }
    tmp = tmp->next;
    tmp2 = tmp2->next;
  }
   
   if(flag==true)
   {
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
    return 0;
}