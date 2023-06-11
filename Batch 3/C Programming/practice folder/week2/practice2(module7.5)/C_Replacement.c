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
        if(arr[i]>0)
        {
            arr[i] = 1;
        } 
        else if (arr[i]<0){
            arr[i] = 2;
        }  
        printf("%d ", arr[i]);
  }
   return 0;
}