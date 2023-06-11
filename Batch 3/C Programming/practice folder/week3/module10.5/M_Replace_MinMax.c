#include<stdio.h>
#include<limits.h>
    
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }


   int max = INT_MIN;
   int min = INT_MAX;
   int minInd = 0;
   int maxInd = 0;

   for(int i=0; i<n; i++)
   {
      if( ar[i] < min)
      {
         min=ar[i];
         minInd = i;
      }
     if( ar[i] > max)
      {
         max=ar[i];
         maxInd = i;
      }
   }

  int tmp = ar[minInd];
  ar[minInd] = ar[maxInd];
  ar[maxInd] = tmp;
   
   for(int i=0; i<n; i++)
   {
    printf("%d ", ar[i]);
   }

    return 0;
}