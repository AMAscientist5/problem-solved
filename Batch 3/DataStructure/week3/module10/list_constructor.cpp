#include<bits/stdc++.h>

using namespace std;
class Node{
  public:
  
  int val;
  Node* next;
  Node* prev;

  Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
  }
};
int main()
{
//   list<int>myList;
//   list<int>myList = {10};
//   cout<<myList.front();

//   list<int>myList(2, 10);
//   cout<<myList.size();

//   list<int>myList = {10, 20};
// list<int>myList2={10, 20, 30};
//   list<int>myList(myList2);

// int a[5] = {1, 2, 3, 4, 5};
// list<int>myList(a, a+5);


// vector<int>v={10, 20, 30};
// list<int>myList(v.begin(), v.end());

// for(auto it = v.begin(); it!= v.end(); it++)
// {
//     cout<<*it<<" ";
// }

vector<int>v={10, 20, 30, 40};
list<int>myList(v.begin(), v.end());

// for(auto it = myList.begin(); it!= myList.end(); it++)
// {
//     cout<<*it<<" ";
// }

  for(int val:myList)
  {
    cout<<val<<" ";
  }

    return 0;
}