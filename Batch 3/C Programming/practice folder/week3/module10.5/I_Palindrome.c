#include<stdio.h>
#include<string.h>
    
int main()
{
    char s[1001];
    scanf("%s", s);

int sz= strlen(s);

  int i=0, count=1;

  for(int j=sz-1; j>0; j--)
  {
    if(s[i] != s[j])
    {
        count--;
        break;
    }
    i++;
  }
   if(count)
   {
    printf("YES");
   }
   else{
    printf("NO");
   }

    return 0;
}