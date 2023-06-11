#include<bits/stdc++.h>

using namespace std;

int main()
{

vector<int>v={10, 20, 30, 40, 50, 60, 70, 80, 10};
//    replace(v.begin(),v.end(),10, 100);
   replace(v.begin(),v.end()-1,10, 100);

  for(int x: v){

   cout<<x<<" ";
  }
  cout<<endl;

    return 0;
}