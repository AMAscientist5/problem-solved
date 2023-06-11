#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector<int>v;
//   v.size(); 
//   cout<<v.max_size();
//   cout<<v.capacity();
//  v.push_back(10);
//   cout<<v.capacity();

//   cout<<v.capacity()<<endl;
//   v.push_back(10);
//  v.push_back(20);
//  v.push_back(30);
//  v.push_back(40);
//  v.push_back(50);
//   cout<<v.capacity()<<endl; // capacity will be double if previous limit is cross

// clear function use it's make zero of size but value still exist
//  v.push_back(10);
//  v.push_back(20);
//  v.push_back(30);
//  v.push_back(40);
//  v.push_back(50);
//  v.clear();
//  cout<<v.size()<<endl; // size wil be zero by clear()

// for(int i=0; i<v.size(); i++)
// {
//     cout<<v[i]<<endl;
// }
// cout<<v.capacity()<<endl;
// cout<<v[0]<<endl;
// cout<<v[1]<<endl;
// cout<<v[2]<<endl;
// cout<<v[3]<<endl;
// cout<<v[4]<<endl;


 v.push_back(10);
 v.push_back(20);
 v.push_back(30);
 v.push_back(40);
 v.push_back(50);
 
 v.resize(2); // after 2 value will be delete
 v.resize(4); // if the size is more than real size then it take zero or should use value
 v.resize(4, 10); // if the size is more than real should use value
for(int i=0; i<v.size(); i++)
{
    cout<<v[i]<<endl;
}

//   cout<<endl;

    return 0;
}