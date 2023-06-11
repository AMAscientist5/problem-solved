#include <stdio.h>
#include <string.h>


int main() {
char str[100];

scanf("%s", &str);
int len = strlen(str);
char first_char = str[0];
char last_char = str[len-1];
int rest_chars = len-2;

if(len > 10){
printf("%c%d%c\n", first_char, rest_chars, last_char);
}
else
{
   printf("string is short");
}

  return 0;
}



