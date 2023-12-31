#include <bits/stdc++.h>

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

void insert_at_head(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    newNode->next = head;
    head = newNode;
}  


void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head, Node *tail)
{
    cout << head->val << " " << tail->val;
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {

        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }

        print_linked_list(head, tail);
      
    }

    return 0;
}