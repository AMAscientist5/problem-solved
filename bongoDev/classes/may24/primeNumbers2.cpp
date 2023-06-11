#include<bits/stdc++.h>

using namespace std;
bool prime[5000006];

void sieve(long long n){
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i <= n; i++)
    {
       if(prime[i]==true)
       {
        for(int k=i*i; k<=n;k+=i)
            prime[k] = false;
       }
    }

    int count =0;
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==true)
            count++;
    }
    cout<<count<<endl;
}

int main()
{
  long long n;
  cin>>n;
  sieve(n);

    return 0;
}