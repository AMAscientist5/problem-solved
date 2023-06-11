#include<stdio.h>
    
int main()
{
    int t;
    scanf("%d", &t);
   

    //4,294,967,296
    while(t--)
    {
         int total,num1, num2, num3, num4;
         scanf("%d %d %d %d", &total, &num1, &num2, &num3);

          num4 = total - (num1+num2+num3);

          printf("%d\n", num4);

    }

    return 0;
}