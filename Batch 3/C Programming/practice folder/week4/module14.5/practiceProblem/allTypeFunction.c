#include<stdio.h>

   // return and parameter have 
// char small_to_capital(char c)
// {
//   int r;
//   if(c >= 'a' && c <= 'z')
//     {
//         r = c-32;
//         return r;
//     }
// }
  

// int main()
// {
// char letter;
// scanf("%c", &letter);
// char result = small_to_capital(letter);

//  printf("%c", result);

//     return 0;
// }

//  no parameter have return
// char small_to_capital(void)
// {
//   char c;
//   scanf("%c", &c);
//   int r;
//   if(c >= 'a' && c <= 'z')
//     {
//         r = c-32;
//         return r;
//     }
// }
  

// int main()
// {

// char result = small_to_capital();

//  printf("%c", result);

//     return 0;
// }

// have parameter no return 

// void small_to_capital(char c)
// {
//   int r;
//   if(c >= 'a' && c <= 'z')
//     {
//         r = c-32;
//         printf("%c", r);
//     }
// }
  

// int main()
// {
// char letter;
// scanf("%c", &letter);
// small_to_capital(letter);

//     return 0;
// }

// no parameter no return

void small_to_capital(void)
{
  char c;
  scanf("%c", &c);
  int r;
  if(c >= 'a' && c <= 'z')
    {
        r = c-32;
        printf("%c", r);
    }
}
  

int main()
{

small_to_capital();

    return 0;
}
