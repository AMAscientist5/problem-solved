#include<stdio.h>
    
int main()
{
    int n;
    scanf("%d", &n);

    int sp = n-1; 
    int as = 1;
  
    for(int i=0; i<(2*n)-1; i++)
    {
        for(int j=1; j<=sp; j++)
        {
           printf(" ");
        }
         
        for(int j=1; j<=as; j++)
        {
           printf("%d", j);
        }
        printf("\n");
        if(i<n-1)
        {
         sp--;
         as=as+2;
        }
        else{
            sp++;
            as=as-2;
        }
    }

    return 0;
}