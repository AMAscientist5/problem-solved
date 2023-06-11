#include<stdio.h>

    
void print_function(int a[], int s)
{
    int max = a[0];
    int min = a[0];
    for(int i=0; i<s; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }

    printf("%d %d ", min, max);
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
print_function(a, n);
    return 0;
}

