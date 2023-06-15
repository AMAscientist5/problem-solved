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

vector<int>v;

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


void is_ascending(Node* head)
{
     Node* tmp = head;
     while(tmp != NULL)
     {
        v.push_back(tmp->val);
        tmp = tmp->next;

     }

     bool flag = true;

     for(int i=0; i<v.size()-1; i++)
     {
        if(v[i]>v[i+1]){
        flag = false;
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

    is_ascending(head);
  
    return 0;
}