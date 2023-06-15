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

  void print_size(Node* head){
      
      int count = 0;
      Node* tmp = head;
      while(tmp != NULL){
         count++;
         tmp = tmp->next;
      }
      cout<<count<<endl;
  }


int main()
{
    
    Node* head = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }else{
            insert_linked_list(head, val);
        }
    }
    print_size(head);
  

    return 0;
}