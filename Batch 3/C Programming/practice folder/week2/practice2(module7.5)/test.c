#include<stdio.h>

int main()
{
  int s;
  scanf("%d", &s);
  int arr[s];

  int sum = 0;

  for(int i=0; i<s; i++)
  {
    scanf("%d", &arr[i]);
    if(arr[i]<0)
    {
       int abs = arr[i]*-1;
       sum +=abs;
    }
    if(arr[i]>0)
    {
     sum += arr[i];
    }
}

    printf("%d", sum);
    return 0;
}