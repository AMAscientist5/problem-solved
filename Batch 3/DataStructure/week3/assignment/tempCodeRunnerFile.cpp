#include<bits/stdc++.h>

using namespace std;
class Node{
  public:
  
  string val;
  Node* next;
  Node* prev;

  Node(string val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
  }
};

void insert_tail(Node* &head, Node* &tail, string val)
{
  Node* newNode = new Node(val);
  if(tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print(Node* head)
{
  Node* tmp = head;
  while(tmp != NULL)
  {
    cout<<tmp->val<<endl;
    tmp = tmp->next;
  }
}
int main()
{
  Node* head = NULL;
  Node* tail = NULL;
  string val;
  string end = "end";
  while(true)
  {
    cin>>val;
    if(val==end)
       break;
   
   insert_tail(head, tail, val);
  }

  Node* tmp = head;
  // Node* tmpTail = tail;
  string part1, part2;
  string next = "next";
  string prev = "prev";

  int q;
  cin>>q;
  cin.ignore();
  while(q--&& tmp != NULL)
  {
    // tmp = head;
    string command;
    getline(cin, command);

     if(command != next && command != prev)
     {
       istringstream ss(command);
       ss >> part1 >> part2;
        while(tmp != NULL)
        {
           if(tmp->val == part2)
           {
             
             cout<<tmp->val<<endl;
             break;
           }
           tmp = tmp->next;
        }
        if(tmp==NULL)
        {
          cout<<"Not available"<<endl;
        }
     }else if(command == prev)
     {
      if(tmp->prev==NULL)
      {
        cout<<"Not Available"<<endl;
        
      }else{
        tmp = tmp->prev;
        cout<<tmp->val<<endl;
      }
       
     }else if(command == next)
     {
      if(tmp->next==NULL){
        cout<<"Not available"<<endl;
      }else{
       tmp = tmp->next;
       cout<<tmp->val<<endl;
      }
     }
  }

//  cout<<tmp->val<<endl;
//  cout<<tmpTail->val<<endl;
// print(head);

    return 0;
}