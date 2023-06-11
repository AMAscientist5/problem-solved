#include<stdio.h>
    
int summation(int a, int b)
{ 
     int sum = a+b;
     return sum;   
}

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int sums = summation(x, y);
    printf("%d", sums);
    
    return 0;
}