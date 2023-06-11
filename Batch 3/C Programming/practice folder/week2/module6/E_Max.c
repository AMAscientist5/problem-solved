// #include <stdio.h>

// int main() {
//     int n, i, max_num = 0;
//     scanf("%d", &n);

//     for(i = 0; i < n; i++) {
//         int num;
//         scanf("%d", &num);
//         if(num > max_num) {
//             max_num = num;
//         }
//     }

//     printf("%d", max_num);
//     return 0;
// }

#include <stdio.h>
#include<limits.h>

int main() {
    int n, i, max = INT_MIN, min= INT_MAX;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if(num > max) {
            max = num;
        }
        if(num < min) {
            min = num;
        }
    }

    printf("%d %d",min, max);
    return 0;
}
