#include<stdio.h>
#include<string.h>
    
int main()
{
    char s[1000];
    scanf("%s", &s);
    char t[1000];
    scanf("%s", &t);

    int szs = strlen(s);
    int szt = strlen(t);

    printf("%d %d\n", szs, szt);
    printf("%s %s", s, t);

    return 0;
}