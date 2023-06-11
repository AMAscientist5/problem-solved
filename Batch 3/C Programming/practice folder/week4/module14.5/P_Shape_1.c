#include<stdio.h>
    
int main()
{
    int n;
    scanf("%d", &n);

    int k=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=k+i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}