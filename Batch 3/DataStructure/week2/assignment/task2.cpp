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

  int size(Node* head){
      
      int count = 0;
      Node* tmp = head;

      while(tmp != NULL){
         count++;
         tmp = tmp->next;
      }
      return count;
  }


void insert_linked_list(Node* &head, int val)
  {
      Node* newNode = new Node(val);
      if(head==NULL)
      {
        head=newNode;
        return;
      }

      Node* tmp = head;
      while(tmp->next != NULL)
      {
        tmp = tmp->next;
      }
      tmp->next = newNode;
  }

  void is_same_linked_list(Node* head, Node*head2)
{
    bool flag = true;

    if(size(head)!=size(head2)){
        flag = false;
    }

     Node* tmp = head; Node* tmp2 = head2;

     while(tmp != NULL && tmp2 != NULL)
     {
        if(tmp->val!=tmp2->val){
            flag= false;
            break;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
     }

     if(flag){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main()
{
  Node* head = NULL;
  Node* head2 = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1){
            break;
        }
        insert_linked_list(head, v);
    }
    while(true)
    {
        cin>>v;
        if(v==-1){
            break;
        }
        insert_linked_list(head2, v);
    }

  is_same_linked_list(head, head2);

    return 0;
}