#include<stdio.h>
    
int main()
{
    int n;
    scanf("%d", &n);
    int sp = n-1; 
    int as = 1;
  
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sp; j++)
        {
           printf(" ");
        }
         
        for(int j=1; j<=as; j++)
        {
           printf("%d", i);
        }
        printf("\n");
         sp--;
         as++;
    
    }
    return 0;
}