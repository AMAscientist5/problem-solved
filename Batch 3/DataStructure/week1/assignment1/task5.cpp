#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;

  for(int i=0; i<n; i++){
     for(int j=0; j<n; j++)
     {
        if(i==j && i+j==n-1){
          // cout<<"X"<<" ";
          cout<<"X";
        }else if(i==j){
          cout<<"x";
          // cout<<"\\"<<" ";
        }else if(i+j==n-1){
          cout<<"x";
          // cout<<"/"<<" ";
        }else{
          cout<<"x";
          // cout<<" ";
        }     
     }
     cout<<endl;
  }
    return 0;
}