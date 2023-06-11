#include<bits/stdc++.h>

using namespace std;

int main()
{

  vector<int>v={10, 20, 30, 40, 50, 60, 70, 80, 10};
//    v.erase(v.begin()+2);
//    v.erase(v.begin()+2,v.end()-1);
   v.erase(v.begin()+2,v.begin()+8);


  for(int x: v){

   cout<<x<<" ";
  }
  cout<<endl;

    return 0;
}