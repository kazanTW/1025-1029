#include <stdio.h>

int check_prime(int n);
void prime(int n, int m);

int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);

    prime(n, m);

    return 0;
}

int check_prime(int n) {
    int prime = 1;

    if (n != 1 && n != 2) {
        if (n % 2 != 0) {
            for (int i = 3; i <= n; i++) {
                if (n % i != 0 && i != n) {
                    continue;
                }
                else if (n % i == 0 && i != n) {
                    prime = 0;
                    break;
                }
                else if (n % i == 0 && i == n) {
                    break;
                }
            }
        }
        else if (n % 2 == 0) {
            prime = 0;
        }
    }
    else if (n == 1) {
        prime = 0;
    }
    else if (n == 2) {
        prime = 1;
    }

    return prime;
}

void prime(int n, int m) {
    for (int a = n; a <= m; a++) {
        if (check_prime(a) == 1) {
            printf("%d ", a);
        }
    }
    printf("\n");
}