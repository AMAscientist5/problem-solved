#include<stdio.h>
#include<string.h>
    
int main()
{
    // char a[100], b[100];
    // scanf("%s %s", a,b);
    
    // int val = strcmp(a, b);

    // if(val>0)
    // {
    //     printf("B cto");
    // }
    // else if(val<0)
    // {
    //     printf("A cto");
    // }
    // else{
    //     printf("Same");
    // }


char a[100], b[100];
    scanf("%s %s", a,b);
    
    int val = strcmp(a, b);

   int i=0;

    while(1)
    {
      if(a[i]=='\0' && b[i]=='\0')
      {
        printf("Same\n");
        break;
      }
      else if(a[i]=='\0')
      {
        printf("A cto\n");
        break;
      }
         else if(b[i]=='\0')
      {
        printf("B cto\n");
        break;
      }

      if(a[i]==b[i])
      {
        i++;
      }
      else if(a[i]<b[i])
      {
        printf("A cto\n");
        break;
      }
      else{
        printf("B cto\n");
        break;
      }

    }

    return 0;
}