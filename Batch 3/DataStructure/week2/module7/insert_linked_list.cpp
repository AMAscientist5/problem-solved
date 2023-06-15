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

void insert_linked_list(Node* &head, Node* &tail,Node* &tmp, int val){
    Node* newNode = new Node(val);
    
    if(head==NULL){
        head=newNode;
        tail=newNode;
        tmp=newNode;
        return;
    }

    tmp->next=newNode;
    tmp = tmp->next;
    tail=newNode; 

    // tail->next = newNode
    // tail = newNode

}

void print_linked_list(Node* head){

   Node*tmp = head;

   while(tmp != NULL)
   {
    cout<<tmp->val<<" ";
      tmp = tmp->next;
   }

}

int main()
{
  Node* head = NULL;
  Node* tail = NULL;
  Node* tmp = NULL;
  int val;
  while(true)
  {
    cin>>val;
    if(val==-1)
        break;
    insert_linked_list(head, tail,tmp, val);
  }

  print_linked_list(head);

    return 0;
}