#include<bits/stdc++.h>

using namespace std;

int main()
{
   //  complexity is constant O(1)
//   vector<int>v={10, 20, 30};
//   vector<int>v2={40, 50, 60};
// v.assign(v2.begin(), v2.end());


// complexity is O(n)
vector<int>v={10, 20, 30};
  vector<int>v2={40, 50, 60, 70, 80};
v.assign(v2.begin(), v2.end());

v.pop_back();
v.push_back(100);
  for(int x: v){

   cout<<x<<" ";
  }
  cout<<endl;

    return 0;
}