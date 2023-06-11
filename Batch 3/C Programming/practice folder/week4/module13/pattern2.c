#include<stdio.h>
    
int main()
{
 
    int n, s, k;
    scanf("%d", &n);
    s = n-1;
    k=1;
   for(int i=1; i<=n; i++)
   {
     for(int j=1; j<=s; j++)
     {
        printf(" ");
     }
     for(int j=1; j<=k; j++)
     {
        printf("*");
     }
     s--;
     k = k+2;
     printf("\n");
   }
 

// int n, s, k;
// scanf("%d", &n);
// k = n*2-1;
// s = 0;
// for(int i=1; i<=n; i++)
// {

//  for(int j=1; j<=s; j++)
//    {
//     printf(" ");
//    }

//    for(int j=1; j<=k; j++)
//    {
//     printf("*");
//    }
//    k = k-2;
//    s = s+1;
//    printf("\n");
// }

    return 0;
}