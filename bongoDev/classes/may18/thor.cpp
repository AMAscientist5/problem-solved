#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,q;
  scanf("%lld",&n);
  scanf("%lld",&q);
   
   vector<long long int>v;
   map<long long int>unread;
   map<long long int, long long int>read;
   map<long long int, long long int>m;

  for(long long int i=n; i<=q; i++){
     long long int type, x;
     scanf("%lld", &type);
     scanf("%lld", &x);

     long long tot =0;
      if(type == 1)
     {
        q.pb(x);
        unread[x]++;
        tot++
     };
     if(type == 2)
     {
        tot -=unread[x];
        read[x] += unread[x];
        unread[x] =0;
     };
     if(type ==3){
        for(;now<x;now++){
            type3[v[now]]++;
            if(type[v[now]]>read[v[now]])
            {
               read[v[now]]++;
               unread[v[now]]--;
               tot--;
            }
        }
     }

   }



    return 0;
}