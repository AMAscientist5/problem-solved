#include<bits/stdc++.h>

using namespace std;

int main()
{
  list<int>myList = {10, 80, 30, 30, 60,10, 50};

//   myList.remove(10);
// myList.sort(greater<type>())

// to delete the duplicate value first should sort ascending
myList.sort();
// myList.unique();
  myList.reverse();
  for(int val: myList)
  {
    cout<<val<<" ";
  }

    return 0;
}