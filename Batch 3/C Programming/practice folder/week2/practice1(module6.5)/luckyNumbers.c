// #include <stdio.h>

// int main() {
//     int num;
//     scanf("%d", &num);

//     int a =  num / 10;
//     int b =  num % 10;

//     if (a % b == 0 || b % a == 0) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);


        int a = num / 10;
        int b = num % 10;

        if (a != 0 && b != 0 && (a % b == 0 || b % a == 0) || num==10 || num==20|| num==30|| num==40|| num==50|| num==60||num==70|| num==80||num==90) {
            printf("YES");
        } else {
            printf("NO");
        }

    return 0;
}



