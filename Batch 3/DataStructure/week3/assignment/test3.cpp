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


int main()
{

 list<string>myList;
  string val;
  while(true)
  {
    cin>>val;
    if(val=="end")
       break;
   myList.push_back(val);
  }
  
  int q;
  cin>>q;
  while(q--)
  {
    string cmd;
    cin>>cmd;
    if(cmd=="visit")
    {
      string ad;
      cin
    }else if(cmd=="prev")
    {

    }else(cmd=="next")
    {

    }

  }
  
  for(string val: myList)
  {
    cout<<val<<" ";
  }


    return 0;
}