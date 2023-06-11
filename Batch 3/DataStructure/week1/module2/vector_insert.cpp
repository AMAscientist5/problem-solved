#include<bits/stdc++.h>

using namespace std;

int main()
{

  vector<int>v={10, 20, 30, 40, 50, 60, 70, 80, 10};
//   v.insert(v.begin()+2, 200);
vector<int>v2={100, 200, 300};
// multiple value added
v.insert(v.begin()+2, v2.begin(), v2.end());


  for(int x: v){

   cout<<x<<" ";
  }
  cout<<endl;

    return 0;
}