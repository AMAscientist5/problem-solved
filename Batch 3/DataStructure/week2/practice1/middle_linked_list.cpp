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

vector<int>v(100);

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

   int linked_list_size(Node* head){
      
      int count = 0;
      Node* tmp = head;
      while(tmp != NULL){
         count++;
         tmp = tmp->next;
      }
      return count;
  }

void print_middle_position(Node* head, int mid)
{   

    Node* tmp = head;

    for(int i=1; i<=mid-1; i++){
        tmp=tmp->next;
    }
      cout<<tmp->val<<" ";
}

  void middle_linked_list_number(Node* head){
      
      // get the size count
      int count = linked_list_size(head);

      if(count%2==0)
      {
        int mid = (count/2);
        print_middle_position(head, mid);
        print_middle_position(head, mid+1);
      }else{
        int mid = (count/2);
        print_middle_position(head, mid+1);
      }
      
  };

int main()
{
    Node* head = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        insert_linked_list(head, val);
    }
     middle_linked_list_number(head);
    return 0;
}