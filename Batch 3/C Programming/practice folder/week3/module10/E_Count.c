
// this solution is not accepted

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char s[1000001];
//     scanf("%s", s);
//     int num1 = atoi(s);
//     int count = 0;
   
//    while(num1 != 0)
//    {
//        int rem = num1%10;
//        num1 = num1/10;              
//        count = count + rem;
//    }
//     printf("%d", count);
//     return 0;
// }


// second solution is right and accepted;

#include <stdio.h>
#include<stdio.h>

int main() {
    char s[1000001];

    scanf("%s", s);
    int ln = strlen(s);
    int count = 0;

   for(int i=0; i<ln; i++)
   {
        count+=(s[i]-'0');
   }

    printf("%d", count);
    return 0;
}
