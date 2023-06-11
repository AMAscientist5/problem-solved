#include<stdio.h>
#include<stdlib.h>

    
int my_abs(int p)
{
   if(p<0)
   {
     p = p*(-1);
   }
    return p;
}

int main()
{
    int a;
    scanf("%d", &a);

  int r = my_abs(a);
   
    printf("%d", r);

    return 0;
}
 // int r = abs(a);