#include<bits/stdc++.h>

using namespace std;
bool prime[5000006];
vector<long long>prime_num;

void sieve(long long n)
{
   memset(prime, true, sizeof(prime));

   for(int i=2; i*i<=n;i++){
      if(prime[i]==true){
         for(int k=i*i; k<=n; k+=i){
            prime[k] = false;
         }
      }
   }  
   
   int count =0;

   for(int i=2; i<=n; i++)
   {
      if(prime[i]==true){
        prime_num.push_back(i);
        count++;
      }
   }
   cout<<count<<endl;

   for(int i=0; i<prime_num.size(); i++){
      cout<<prime_num[i]<<" ";
   }

}

int main()
{
  long long n;
  cin>>n;

  sieve(n);

    return 0;
}