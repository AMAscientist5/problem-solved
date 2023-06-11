#include<bits/stdc++.h>

using namespace std;

int main()
{
  int test;
  cin>>test;
  while(test--)
  {
     int n;
     cin>>n;
     int frq[26]={0};
        int sum  = 0;
     for(int i=0; i<n; i++)
     {
        char c;
        cin>>c;
        int m = c-65;
       if(frq[m]==0)
       {
         frq[m] +=2;
         sum+=2;

       }else{
        frq[m]++;
        sum++;
       }
     }
    cout<<sum<<endl;
  }

    return 0;
}