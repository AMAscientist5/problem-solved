#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];

    scanf("%s", &s);

    int vowel=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='a')
        {
            vowel++;
        }
        else if(s[i]=='e')
        {
            vowel++;
        }
        else if(s[i]=='i')
        {
            vowel++;
        }
        else if(s[i]=='o')
         {
            vowel++;
         }
         else if(s[i]=='u')
         {
            vowel++;
         }
    }

    printf("%d", vowel);


    return 0;
}