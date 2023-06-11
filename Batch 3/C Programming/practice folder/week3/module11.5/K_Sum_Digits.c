#include<stdio.h>
#include<string.h>
    
int main()
{
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);

  int cnt =0;
    for(int i=0; i<strlen(a);i++)
    {
       cnt+=a[i]-'0';
    }
    printf("%d", cnt);
    
    return 0;
}

