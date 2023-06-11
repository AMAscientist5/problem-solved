#include<stdio.h>
    
void print_function(int a)
{
    for(int i=1; i<=a; i++)
    {
        printf("%d", i);
        if(i<=a-1)
        {
            printf(" ");
        }
    }
}    
int main()
{

int n;
scanf("%d", &n);

print_function(n);

    return 0;
}