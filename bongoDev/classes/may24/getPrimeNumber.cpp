#include<bits/stdc++.h>

using namespace std;

bool prime_check(long long int n)
{
   bool flag = true;

//   long long k = n/2;

// this is just for squireroot if yo utake the build in 
// funtion sometime it give wrong
   for(int i=2; i*i<=n; i++)
   {
     if(n%i==0)
     {
        flag=false;
        break;
     }
   }
   return flag;
}

int main()
{
  long long int n;
  cin>>n;

  bool ans = prime_check(n);

  if(ans==true) cout<<"it is prime";
  else cout<<"it's not prime";

    return 0;
}