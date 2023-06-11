#include<stdio.h>

int main()
{
  int s;
  scanf("%d", &s);
  int arr[s];
  
  for(int i=0; i<s; i++)
  {
    scanf("%d", &arr[i]);
  } 

  for(int i = 0; i<s; i++)
  {
        if(arr[i]<=10)
        {
        printf("A[%d] = %d\n",i, arr[i]);
        } 
    
  }
   return 0;
}