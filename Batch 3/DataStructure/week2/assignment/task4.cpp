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

void print_recursion(Node* n){

    if(n==NULL) return;
    cout<<n->val<<" ";
    print_recursion(n->next);
}

void print_reverse(Node* n){

    if(n==NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}

void insert_linked_list(Node* &head, Node* &tail, int v)
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
    Node* head = NULL;
    Node *tail = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1){
            break;
        }
       insert_linked_list(head, tail, v);
    }
   
    print_reverse(head);
    cout<<endl;
    print_recursion(head);

    return 0;
}