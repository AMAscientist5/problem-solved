#include <stdio.h>

int main()
{
    double R;
    double pi = 3.14159;
    double A;

    scanf("%lf", &R);

    A = pi * (R*R);

    printf("A=%.4lf\n", A);
}
