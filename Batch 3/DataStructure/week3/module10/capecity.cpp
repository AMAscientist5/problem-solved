#include<bits/stdc++.h>

using namespace std;
// class Node{
//   public:
  
//   int val;
//   Node* next;
//   Node* prev;

//   Node(int val){
//     this->val=val;
//     this->next=NULL;
//     this->prev=NULL;
//   }
// };
int main()
{
//   Node* head = new Node(10);
//   Node* a = new Node(10);
//   Node* b = new Node(10);
//   Node* tail = b;

//   head->next=a;
//   a->prev=head;
//   a->next=b;
//   b->prev=a;


// list<int>myList;
// list<int>myList(10);
// cout<<myList.size();

// list<int>myList;
// cout<<myList.max_size();

// list<int>myList(5, 5);
// for(int val: myList)
// {
//     cout<<val<<" ";
// }
// myList.clear();
// for(int val: myList)
// {
//     cout<<val<<" ";
// }


// list<int>myList(5, 5);

// for(int val: myList)
// {
//     cout<<val<<" ";
// }
// myList.clear();
// cout<<endl;

// if(myList.empty())
// {
//     cout<<"empty";
// }else{
//     cout<<"Not empty";
// }



list<int>myList(5, 5);

for(int val: myList)
{
    cout<<val<<" ";
}
myList.resize(3);
cout<<endl;
myList.resize(5, 7);

for(int val: myList)
{
    cout<<val<<" ";
}
    return 0;
}