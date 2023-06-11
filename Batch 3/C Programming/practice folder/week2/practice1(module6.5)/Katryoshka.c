#include<stdio.h>
int main()
{
    long long int e, m, b, p = 0, min;

    scanf("%lld %lld %lld", &e, &m, &b);

    if (e < m && e < b)
    {
        min = e;
    }
    else if (m < b && m < e)
    {
        min = m;
    }
    else
    {
        min = b;
    }

    p += min;
    e = e - min;
    m = m - min;
    b = b - min;

    if (e / 2 <= b)
    {
        p = p + (e / 2);
    }
    else if (e / 2 > b)
    {
        p = p + b;
    }

    printf("%lld\n", p);
    return 0;
}