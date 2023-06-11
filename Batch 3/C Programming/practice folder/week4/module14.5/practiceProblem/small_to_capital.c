#include<stdio.h>
    
char small_to_capital(char c)
{
  int r;
  if(c >= 'a' && c <= 'z')
    {
        r = c-32;
        return r;
    }
}
  

int main()
{
char letter;
scanf("%c", &letter);
char result = small_to_capital(letter);

 printf("%c", result);

    return 0;
}