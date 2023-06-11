#include<stdio.h>
#include<limits.h>

int main()
{
  int s,index, min = INT_MAX;
  scanf("%d", &s);
  int arr[s];
  
  for(int i=0; i<s; i++)
  {
    scanf("%d", &arr[i]);
  } 

  for(int i = 0; i<s; i++)
  {
        if(arr[i]<min)
        {
           min = arr[i];
           index = i;
        }  
  }
  printf("%d %d ",min, index+1);

   return 0;
}