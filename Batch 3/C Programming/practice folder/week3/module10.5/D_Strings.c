#include<stdio.h>
#include<string.h>
    
int main()
{
    char a[11];
    char b[11];

    scanf("%s", a);
    scanf("%s", b);

   int sza = strlen(a);
   int szb = strlen(b);

   printf("%d %d\n", sza, szb);
    printf("%s%s\n", a,b);
   int tmp = a[0];
   a[0] = b[0];
   b[0] = tmp;

 
    printf("%s %s\n", a,b);


    return 0;
}