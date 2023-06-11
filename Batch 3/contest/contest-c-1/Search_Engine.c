#include<stdio.h>
    
int main()
{
   int t, cas=0;
   scanf("%d", &t);
  
  while(t--)
  {
    cas++;
   int n;
   scanf("%d", &n);
   int a[n];
   for(int i=0; i<n; i++)
   {
    scanf("%d", &a[i]);
   }
  int s;
  scanf("%d", &s);

  int index=0;
  
  for(int i=0; i<n; i++)
  {
     if(a[i]==s)
     {
        index = i+1;
        break;
     }
  }

   if(index)
   {
    printf("Case %d: %d \n", cas, index);
   }else{
    printf("Case %d: Not Found\n", cas);
   }
  }

   return 0;
  }
 
 