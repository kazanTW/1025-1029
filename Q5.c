#include <stdio.h>

int check_prime(int n);

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i != 0 && i != n) {
            continue;
        }
        else if (n % i == 0 && i != n) {
            if (check_prime(i) == 1) {
                printf("%d %d \n", i, (n / i));
                break;
            }
            else {
                continue;
            }
        }
        else if (n % i == 0 && i == n) {
            printf("%s\n", "NO");
            break;
        }
    }

    return 0;
}

int check_prime(int n) {
    int prime = 1;

    if (n != 1 && n != 2) {
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
    else if (n == 1) {
        prime = 0;
    }
    else if (n == 2) {
        prime = 1;
    }

    return prime;
}