#include<stdio.h>
    
int main()
{
    int num, sec;
    scanf("%d", &num);
 
 sec = num/1000;
  if(sec%2==0)
  {
    printf("EVEN");
  }
  else{
    printf("ODD");
  }
    return 0;
}