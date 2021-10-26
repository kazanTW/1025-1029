#include <stdio.h>

int counter(int n);

int main(void) {
    int n, temp;
    scanf("%d", &n);
    temp = counter(n);

    printf("%d\n", temp);

    return 0;
}

int counter(int n) {
    int num;
    if (n < 3) {
        num = n;
    }
    else {
        num = ((n / 3) * 3) + counter((n / 3) + (n % 3));
    }

    return num;
}