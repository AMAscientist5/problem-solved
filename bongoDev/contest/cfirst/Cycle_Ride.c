#include<stdio.h>

long long ara[1000005];   
long long csum[1000005];   

int main()
{
    int test;
    scanf("%d", &test);

    for(int cs =1; cs<=test; cs++){
        
        long long n,q,l,r;
        scanf("%lld %lld",&n,&q);

        for(int i=1; i<=n; i++){
            scanf("%lld", &ara[i]);
            csum[i] = csum[i-1]+ara[i];
        }

        printf("Case %d:\n",cs);
        while(q--){
            scanf("%lld %lld", &l, &r);
            long long ans = csum[r] - csum[l-1];
            
            printf("%lld\n",ans);
        }

    }

    return 0;
}