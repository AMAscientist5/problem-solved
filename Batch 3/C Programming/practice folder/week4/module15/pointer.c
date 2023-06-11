#include<stdio.h>
    
int main()
{
    int x = 10;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%d\n", sizeof(x));

    int *p = &x;
    printf("%p\n", p);
    printf("%p\n", &p);
    printf("%d\n", *p);
    printf("%d\n", sizeof(p));

    int *m = p;
    printf("%p\n", m);
    printf("%d\n", *m);
    printf("%d\n", sizeof(m));

    *m = 20;
    printf("%d\n", *m);


    //  two question is make 
    // 1. teacher address it shows 8 digit but to me 16 
    // 2. the pointer sizeof shows to instructor 4 but to me 8

    

   
    

    return 0;
}