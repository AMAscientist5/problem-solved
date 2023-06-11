#include<bits/stdc++.h>

using namespace std;

int main()
{

    
  int n; 
  cin>>n;
  vector<int>v(n);
  
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  int cnt = 0;
  for(int i=0; i<n; i++)
  {
     auto it = find(v.begin(),v.end(),v[i]+1);
     if(it!=v.end()){
        cnt++;
         continue;;
      }
    //   if(it==v.end()){
    //     continue;
    //   }else{
    //      cnt++;
    //      continue;
    //   } 
  }

  cout<<cnt;



//   int n; 
//   cin>>n;
//   vector<int>v(n);
  
//   for(int i=0; i<n; i++){
//     cin>>v[i];
//   }
//   int cnt = 0;
//   for(int i=0; i<n; i++)
//   {
//     for(int j=0; j<n; j++)
//     {
//          if(v[i]+1 == v[j]){
//             cnt++;
//             break;
//          } 
//     } 
//   }
//   cout<<cnt;

//   int n; 
//   cin>>n;
//   int a[n];
  
//   for(int i=0; i<n; i++){
//     cin>>a[i];
//   }
//   int cnt = 0;
//   for(int i=0; i<n; i++)
//   {
//     for(int j=0; j<n; j++)
//     {
//          if(a[i]+1 == a[j]){
//             cnt++;
//             break;
//          } 
//     } 
//   }
//   cout<<cnt;

    return 0;
}