#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n, q; 
  cin>>n>>q;
  int a[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
 
 long long prefix[n]; prefix[0] = a[0];

  for(int i=1; i<n; i++)
  {
     prefix[i] = a[i] + prefix[i-1]; 
  }

  while(q--)
  {
    int l, r;
    cin>>l>>r;
    l--;r--;
    long long sum;
    if(l==0) cout<<prefix[r]<<endl;
    else cout<<prefix[r]-prefix[l-1]<<endl;
  }


    return 0;
}