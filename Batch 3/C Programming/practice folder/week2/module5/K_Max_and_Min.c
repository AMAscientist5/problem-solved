#include<stdio.h>
    
int main()
{
    long long int a, b, c, max=0, min=0;
    scanf("%lld %lld %lld", &a, &b, &c);
    

   if(a>=b && a>=c)
   {
    max=a;
   }else if(b>=a&& b>=c)
   {
    max=b;
   }else{
    max=c;
   }

    if(a<=b && a<=c)
   {
    min=a;
   }else if(b<=a&& b<=c)
   {
    min=b;
   }else{
    min=c;
   }

  printf("%lld %lld", min, max);

    return 0;
}