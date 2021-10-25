#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && n != i) {
            printf("%d ", i);
        }
        else if (n % i == 0 && n == i) {
            printf("%d \n", i);
        }
        else {
            continue;
        }
    }

    return 0;
}