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

void insert_at_tail(Node* &head, int v){
    Node* newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
};

void print_linked_list(Node * head){
  cout<<"Your linked list is:"<<" ";
  Node* tmp = head;
  while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp = tmp->next;
  }
  cout<<endl;
}


void insert_at_position(Node* head, int pos, int v){
    Node* newNode = new Node(v);

   Node* tmp = head;
    for(int i=1; i<=pos-1;i++){
       tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode; 

    cout<<endl<<endl<<"Inserted at position "<<pos<<endl<<endl;
    
};
int main()
{

  Node* head = NULL;
  while(true){
    cout<<"Enter Option 1: to insert at tail"<<endl;
    cout<<"Enter Option 2: to print linked List"<<endl;
    cout<<"Enter Option 3: to insert at position"<<endl;
    cout<<"Enter Option 4: to terminate"<<endl;
    int op;
    cin>>op;

    if(op==1){
      int v;
      cin>>v;
      insert_at_tail(head, v);
    }else if(op==2){
        print_linked_list(head);
    }else if(op ==3){
       int pos, v;
       cout<<"Enter a position:"<<endl;
       cin>>pos;
       cout<<"Enter a valid value:"<<endl;
       cin>>v; 
       insert_at_position(head, pos, v);
       
    }else{
        break;
    }


  }

    return 0;
}