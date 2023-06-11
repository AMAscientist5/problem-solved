#include<stdio.h>
    
int main()
{
    int a, b, s;

    scanf("%d %d", &a, &b);

    if(a-b>=0)
    {
        printf("%d", s = (a-b));
    }
    else if(a-b<0) {
        printf("0");
    }

    return 0;
}