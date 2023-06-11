#include<bits/stdc++.h>

using namespace std;

long long int ara[200005];
map<long long int, long long int>m;


int main()
{
  long long int n;
  cin>>n;

  long long int ans=0;
  long long int current=0;

  for(long long int i=0; i<2*n; i++){
    cin>>ara[i];

    if(m.find(ara[i])!= m.end())
    {
        current--;
    }else{
        m[ara[i]] = 1;
        current++;
        ans = max(ans, current);
    }
  }

  printf("%lld\n", ans);

    return 0;
}