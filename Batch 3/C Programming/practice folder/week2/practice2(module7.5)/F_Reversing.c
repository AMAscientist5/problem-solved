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

  for(int i = s-1; i>=0; i--)
  {
        printf("%d ", arr[i]);
  }

   return 0;
}