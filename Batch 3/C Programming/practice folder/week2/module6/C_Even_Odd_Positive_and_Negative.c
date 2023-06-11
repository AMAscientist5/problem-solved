#include <stdio.h>

int main() {
    int n, x, even=0, odd=0, positive=0, negative=0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        scanf("%d", &x);

        if (x % 2 == 0) { // check if x is even
            even++;
        } else {
            odd++;
        }

        if (x > 0) { // check if x is positive
            positive++;
        } else if (x < 0) { // check if x is negative
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
