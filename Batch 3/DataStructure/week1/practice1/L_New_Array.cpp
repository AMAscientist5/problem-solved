#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>A(n);
  vector<int>B(n);
  vector<int>C(n+n);

  for(int i=0;i<n;i++)
  {
     cin>>A[i];
  }
  for(int i=0;i<n;i++)
  {
     cin>>B[i];
  }

  B.insert(B.begin()+n,A.begin(), A.end()); 
  C=B;

  for(int i=0;i<C.size();i++)
  {
     cout<<C[i]<<" ";
  }
 
    return 0;
}