// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d", &T);

//     while (T--) {
//         long long L, R;
//         scanf("%lld %lld", &L, &R);

//         if (L % 2 == 0) {
//             L++;
//         }
//         if (R % 2 == 1) {
//             R++;
//         }
        
//         long long ans = R-(L-1);
//          ans = ans/2;

//         long long ans = (R - L) / 2 + 1;


//          printf("%lld\n", ans);
//     }

//     return 0;
// }


//================================
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long L, R;
        scanf("%lld %lld", &L, &R);

        // adjust L and R to odd numbers if necessary
        if (L % 2 == 0) {
            L++;
        }
        if (R % 2 == 0) {
            R--;
        }

        // calculate the number of odd numbers in the range
        long long count = (R - L) / 2 + 1;

        printf("%lld\n", count);
    }

    return 0;
}
