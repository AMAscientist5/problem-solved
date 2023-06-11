
#include <stdio.h>

int main() {
    int n, i;
    int found_even = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            found_even = 1;
        }
    }

    if (!found_even) {
        printf("-1\n");
    }

    return 0;
}
