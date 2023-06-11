#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
  cin>>n;

  int a[n];

  for(int i=0; i<n; i++){
     cin>>a[i];
  }

  for(int i=0; i<n; i++){
     if(a[i]==0)
     {
        continue;
     }
     if(a[i]>0)
     {
      a[i] = 1;
     }
     if(a[i]<0){
        a[i] = 2;
     }
  }

 for(int x: a){
   cout<<x<<" ";
  }

//   int n;
//   cin>>n;

//   vector<int>v(n);

//   for(int i=0; i<n; i++){
//      cin>>v[i];
//   }
//   for(int i=0; i<n; i++){
//      if(v[i]==0)
//      {
//         continue;
//      }
//      if(v[i]>0)
//      {
//         replace(v.begin(), v.end(),v[i],1);
//      }
//      if(v[i]<0){
//         replace(v.begin(), v.end(),v[i],2);
//      }
//   }

//  for(int x: v){
//    cout<<x<<" ";
//   }
    return 0;
}