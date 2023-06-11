#include<bits/stdc++.h>

using namespace std;

  //-95409 -30199  asce -30199 -30199
int main()
{
  int a, b, c, max, min;
  cin>>a>>b>>c;

  if(a>=b && a>=c)
  {
    max = a;
  }else{
    if(b>=a && b>=c)
    {
        max = b;
    }else{
        max = c;
    }
  }
  if(a<=b && a<=c)
  {
    min = a;
  }else{
    if(b<=a && b<=c)
    {
        min = b;
    }else{
        min = c;
    }
  }
  cout<<min<<" "<<max;

    return 0;
}