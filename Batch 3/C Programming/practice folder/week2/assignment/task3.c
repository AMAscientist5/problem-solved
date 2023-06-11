#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);
    }

    long long int evenSum=0, oddSum=0;
    
   for(int i=0; i<n; i++)
   {
      if(arr[i]%2==0)
      {
         evenSum+=arr[i];
      }
     else{
         oddSum+=arr[i];
      }   
   }

  printf("%lld %lld", evenSum, oddSum);
    return 0;
}
