#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++)
  {
     cin>>a[i];
  }

  int i=0, flag=1;
  for(int j=n-1; j>0; j--)
  {
    if(a[i]!=a[j]){
      flag=0;
      break;
    }
    i++;
  }

  if(flag){
    cout<<"YES";
  }else{
    cout<<"NO";
  }

    return 0;
}