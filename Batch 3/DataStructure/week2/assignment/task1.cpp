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

void max_and_min(Node* head)
{
    int min = INT_MAX;
    int max = INT_MIN;
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val<min)
        {
            min = tmp->val;
        }

        if(tmp->val>max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }

    cout<<max<<" "<<min;
}

int main()
{
   Node* head = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1){
            break;
        }
        insert_linked_list(head, v);
    }
  
    max_and_min(head);

    return 0;
}