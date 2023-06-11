#include<stdio.h>
    
int main()
{
    int n;
    scanf("%d", &n);
   int s = n-1;
   int k=1;

   for(int i=1; i<=(2*n); i++)
   {
      for(int j=1; j<=s; j++)
      {
        printf(" ");
      }
      for(int j=1; j<=k; j++)
      {
        printf("*");
      }
       printf("\n");  //  s=3 k=1  i=1 *    s=2 k=3  i=2
       if(i<=n-1){    //  s=2 k=3  i=2 ***  s=1 k=5  i=3
         s--;         //  s=1 k=5 i=3 ***** s=0 k=7 i=4
         k = k+2;     //  s=0 k=7 i=4 ******* s=0 k=7 i=4
       }              //  s=0 k=7 i=4 ******* s=0 k=7 i=5
       else if(i==n)
       {
        continue;
       }
       else if(i>n)
       {
          s++;
         k = k-2;
       }
   }   
    return 0;
}