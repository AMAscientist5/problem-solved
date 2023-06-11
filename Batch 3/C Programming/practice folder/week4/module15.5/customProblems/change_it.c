#include<stdio.h>
    
void count_odd(int a[], int s)
{ 
    for(int i=0; i<s; i++)
    { 
        if(i == s-1)
        {
           a[i] = 100;
        }
    }
    return ;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    count_odd(a, n);

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}