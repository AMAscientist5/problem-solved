#include<stdio.h>
    
int main()
{
    char x;
    scanf("%c", &x);

    if(x>='0' && x<='9')
    {
        printf("IS DIGIT\n");
    }
    else if(x>='A' && x<='Z'){
         printf("ALPHA\nIS CAPITAL");

    }  
    else if(x>=97 && x<=122)
    {
            printf("ALPHA\nIS SMALL");
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     char X;
//     scanf("%c", &X);

//     if (X >= '0' && X <= '9') {
//         printf("IS DIGIT\n");
//     } else if (X >= 'A' && X <= 'Z') {
//         printf("ALPHA\n");
//         printf("IS CAPITAL\n");
//     } else if (X >= 'a' && X <= 'z') {
//         printf("ALPHA\n");
//         printf("IS SMALL\n");
//     }

//     return 0;
// }
