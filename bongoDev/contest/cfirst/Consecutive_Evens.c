#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long n, x;
        scanf("%lld", &n);
        x = n/3;
        printf("%d %d %d\n", x-2, x, x+2);
    }

    return 0;
}



//============
// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d", &T);

//     while (T--) {
//         long long n, i;
//         scanf("%lld", &n);

       
//         for(i=2; i<=n; i=i+2)
//         {
//             if(i+(i+2)+(i+4)==n)
//             {
//                 printf("%d %d %d", i, i+2, i+4);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
