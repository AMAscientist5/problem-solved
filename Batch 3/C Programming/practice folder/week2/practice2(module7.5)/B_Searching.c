#include<stdio.h>

int main()
{
  int s, searNumber, not_found=1;
  scanf("%d", &s);
  int arr[s];
  
  for(int i=0; i<s; i++)
  {
    scanf("%d", &arr[i]);
  } 

   scanf("%d", &searNumber); 

  for(int i = 0; i<s; i++)
  {
     if(searNumber == arr[i])
     {
        printf("%d", i);
        not_found=0;
        break;
     }
  }

  if(not_found)
  {
    printf("-1");
  }


  
   return 0;
}