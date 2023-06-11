#include<bits/stdc++.h>
using namespace std;

long long ara[200005];
map<long long,long long>m;

int main()
{
    long long n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        scanf("%lld", &ara[i]);
    }

    long long ans =1;

    for(int i=1; i<=n; i++){
        if( m.find(ara[i]) != m.end())
        {
          long long x = (i - m[ara[i]])+1;
          ans = max(ans,x);
        }else{
            m[ara[i]] = i;
        }
    }
    
    printf("%lld", ans);

    return 0;
}