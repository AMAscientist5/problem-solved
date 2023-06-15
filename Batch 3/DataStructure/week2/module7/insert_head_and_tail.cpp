#include<bits/stdc++.h>

using namespace std;

// class Node{
//   public:
  
//   int val;
//   Node* next;

//   Node(int val){
//     this->val=val;
//     this->next=NULL;
//   }
// };

class Node{
    public:
    int val;
    Node* next;

    Node(int v){
        val=v;
        next=NULL;
    }
};

int size(Node* head){
     Node* tmp=head;
   int count =0;
   while(tmp != NULL)
   {
      tmp = tmp->next;
      count++;
   }
   return count;
}

void insert_at_position(Node* head, int pos, int v)
{   
    Node* newNode = new Node(v);
    Node* tmp = head;

    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_linked_lists(Node* head){
   Node* tmp=head;
   while(tmp != NULL)
   {
      cout<<tmp->val<<" ";
      tmp = tmp->next;
   }
}

void insert_head(Node* &head, int v){
   Node* newNode = new Node(v);
   newNode->next=head;
   head=newNode;
}

void insert_tail(Node* &head, Node* &tail, int v)
{
      Node* newNode = new Node(v);
      if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
      }

      tail->next = newNode;
      tail = newNode;
}

int main()
{
   Node* head = new Node(10);
   Node* a = new Node(20);
   Node* b = new Node(30);
   Node* c = new Node(40);
   Node* d = new Node(50);
   Node* tail = d;

   cout<<"tail: "<<tail->val<<endl;
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   
   int pos, val;
   pos=5;
   val=500;

   if(pos>size(head)){
    cout<<"Invalid Position";
   }else if(pos==0){
     insert_head(head, val);
   }else if(pos==size(head)){
     insert_tail(head, tail, val);
     cout<<"tail: "<<tail->val<<endl;
   }
   else{
     insert_at_position(head, pos, val);
   }

     print_linked_lists(head);
     cout<<"tail: "<<tail->val<<endl;

    return 0;
}