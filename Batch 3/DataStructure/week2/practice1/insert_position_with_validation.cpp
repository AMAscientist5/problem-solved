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

void insert_at_head(Node* &head, int val){
       Node* newNode = new Node(val);

       newNode->next = head;
       head = newNode;
}  

void insert_at_position(Node* head, int pos, int v)
{   
  Node* newNode = new Node(v);
    Node* tmp = head;

    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
    }

    newNode->next=tmp->next;
    tmp->next=newNode;

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
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        insert_linked_list(head, val);
    }
    int query;
    cin>>query;
    while(query--){
        int pos, val;
        cin>>pos>>val;
        
        if(pos==0){
           insert_at_head(head, val);
        }else if(pos>size(head)){
           cout<<"Invalid"<<endl;
           continue;
        }else{

           insert_at_position(head, pos, val);
        }
        print_linked_list(head);
        cout<<endl;
    }
     
    return 0;
}
