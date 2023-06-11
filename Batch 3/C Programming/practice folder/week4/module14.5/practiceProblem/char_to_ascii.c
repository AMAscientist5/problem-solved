#include<stdio.h>
    
int char_to_ascii(char c)
{
  int r;
  if(c >= '0' && c <= '9')
    {
        r = c;
        return r;
    }
    else if(c >='a' && c<='z')
    {
        r = c;
        return r;
    }
    else if(c >='A' && c<='Z')
    {
        r = c;
        return r;
    }
}
  

int main()
{
char letter;
scanf("%c", &letter);
int result = char_to_ascii(letter);

 printf("%d", result);

    return 0;
}