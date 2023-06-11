#include<stdio.h>
#include <math.h>

int returnWithParameter(int p)
{
    int sum = p+p;
    return sum;
}

int returnNoParameter(void)
{
    int m;  
    scanf("%d %d", &m); // take an integer value m;  

    int div = m/m;
    return div; 
}

void parameterNoReturn(int p)
{
    int mul = p*p;
     printf("%d\n", mul);
}

void noReturnNoParameter(void)
{
    printf("No return and parameter");
}

int main()
{
    int a;  
    scanf("%d", &a); // take an integer value a;

// return and parameter example 
   int sum = returnWithParameter(a);  
   printf("%d\n", sum);

// return with no parameter
   int result = returnNoParameter();
   printf("%d\n", result);

// parameter but no return
   parameterNoReturn(a);

// no return no parameter
   noReturnNoParameter();
   return 0;
}