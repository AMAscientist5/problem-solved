#include<bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];

 while(n>0)// log(logN)
  {
     int digit = n%10;
     cout<<digit<<endl;
     n/=10;
  }

  for(int i=0; i<n; i=i+2)// log(logN) complexity
  {
     cout<<i;
  }
    return 0;
}