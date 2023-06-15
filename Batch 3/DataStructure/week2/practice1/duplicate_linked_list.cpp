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

void is_duplicate(Node* head)
{
     Node* tmp = head;
     while(tmp != NULL)
     {
        v[tmp->val]++;
        tmp = tmp->next;
     }

     bool flag = false;

     for(int i=0; i<v.size(); i++)
     {
        if(v[i]>1){
        flag = true;
          break;
        }
     }

     if(flag){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
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

    is_duplicate(head);
  

    return 0;
}