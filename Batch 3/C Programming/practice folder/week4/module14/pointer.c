#include<stdio.h>
    
int main()
{
    int x=10;
    printf("%d\n", x);
    printf("%p\n", &x);
    int *p = &x;
    printf("%p\n", &p);
    //dereference
    printf("%d\n", *p);
    *p = 100;

   printf("%d\n", x);
   printf("%d\n", x);

    return 0;
}