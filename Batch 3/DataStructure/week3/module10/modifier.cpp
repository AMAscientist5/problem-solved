#include<bits/stdc++.h>

using namespace std;

int main()
{
  list<int>myList;
//   list<int>list2={10, 20, 30};


//   myList.assign(list2.begin(),list2.end());


 myList.push_back(10);
  myList.push_back(20);
  myList.push_back(30);
  myList.push_back(40);
 myList.push_back(50);

//   myList.pop_back();
//   myList.pop_front();

//   vector<int>v={100, 200, 300};
    // myList.insert(next(myList.begin(),1), 200);
    // myList.insert(next(myList.begin(),1), v.begin(), v.end());

 
//  myList.erase(next(myList.begin(),1), next(myList.begin(),3));

// value 40 will change all the 40 value with 0 in the list
// replace(myList.begin(),myList.end(),40,0);


auto it = find(myList.begin(), myList.end(), 50);

if(it==myList.end())
{
    cout<<"Not Found";
}else{
    cout<<"Found";
}

  for(int val: myList)
  {
    cout<<val<<" ";
  }



    return 0;
}