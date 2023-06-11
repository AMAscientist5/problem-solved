#include<bits/stdc++.h>

using namespace std;

int main()
{
  // with no space
  vector<string>v;
    int n;
    cin>>n;
  for(int i=0; i<n;i++)
  {
      string s;
      cin>>s;
      v.push_back(s);
  }
  for(string str: v)
  {
      cout<<str<<endl;
  }


 // with space   
//     int n;
//     cin>>n;
//     cin.ignore();
//   vector<string>v(n);
  
//   for(int i=0; i<v.size();i++)
//   {
//       getline(cin, v[i]);
//   }
//   for(string str: v)
//   {
//       cout<<str<<endl;
//   }
    return 0;
}