// #include <stdio.h>

// int main() {
//     int x;
//     while(scanf("%d", &x)) {
//         if(x == 1999) {
//             printf("Correct\n");
//             return 0; 
//         }
//         else {
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }

#include<stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        if(n==1999)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
}
