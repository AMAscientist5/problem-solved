#include<stdio.h>

int main()
{
  int s;
  scanf("%d", &s);
  int arr[s];
  
  long long int sum = 0;

  for(int i=0; i<s; i++)
  {
    scanf("%d", &arr[i]);
     sum = sum + arr[i];
  }  
  if(sum<0)
  {
  sum*=-1;
  }
 
  printf("%lld", sum);
   return 0;
}