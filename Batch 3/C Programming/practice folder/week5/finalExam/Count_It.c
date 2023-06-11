#include<stdio.h>
#include<string.h>
    
int main()
{
    char str[1005];
    fgets(str, sizeof(str), stdin);
    
    int  capital=0, small=0, space=0;

    for(int i=0; i<strlen(str); i++)
    {
        
        if(str[i]>='a' & str[i]<='z'){
            small++;
        }
        if(str[i]==' '){
            space++;
        }
        if(str[i]>='A' & str[i]<='Z')
        {
            capital++;
        }
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);
    return 0;
}