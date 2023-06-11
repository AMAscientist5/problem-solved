#include<stdio.h>
#include<stdio.h>
    
int main()
{
    char s[100];
    scanf("%s", s);

   int cnt[26]={0};
    for(int i=0; i<strlen(s); i++)
    {
        int value = s[i]-'a';
         cnt[value]++;
        // printf("%c ", s[i]); 
    }
    // for(int i=0; i<26; i++)
    // {
    //     all letter print in order
    //      printf("%c - %d\n",i+'a', cnt[i]);

    //      letters print are given input
    //       if(cnt[i]!=0)
    //       {
    //                 printf("%c - %d\n",i+'a', cnt[i]);
    //       }
    // }

    // for(int i=0; i<strlen(s); i++)
    // {
    //     int value = s[i]-'a';
    //     printf("%c - %d\n", value+'a', cnt[value]);
    // }

     for(int i=0; i<strlen(s); i++)
    {
        int value = s[i]-'a';
        if(cnt[value]!=0)
        {
            printf("%c - %d\n", value+'a', cnt[value]);
        }
        cnt[value]=0;

    }


    return 0;
}