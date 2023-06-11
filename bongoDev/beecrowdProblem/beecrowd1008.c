#include <stdio.h>

int main()
{
    int employNumber;
    int hours;
    double hourDollar;
    double salary;


    scanf("%d%d%lf", &employNumber, &hours, &hourDollar);

    salary = hours*hourDollar;

    printf("NUMBER = %d\nSALARY = U$ %.2lf \n", employNumber, salary);
}
