#include<stdio.h>

int count(int n)
{
   if (n == 0){
    return;
   }
   int ans = n%10;
   count(n/10);
   printf("%d ",ans);
}    

int main()
{
    
  count(123);
  
    return 0;
}