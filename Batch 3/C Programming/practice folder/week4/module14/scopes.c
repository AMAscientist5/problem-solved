#include<stdio.h>

int x = 10;

 int sum(void)
 {
    int y = 20;
    printf("%p\n", &y);
    printf("%p\n", &x);
 }    
int main()
{
    sum();
   printf("\n");
   int a =30;

   printf("%p\n", &a);
   printf("%p\n", &x);

  // printf("%p", (void *)&a);

    return 0;
}