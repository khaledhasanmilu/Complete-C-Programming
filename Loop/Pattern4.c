#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n + 1; i++) {
        for (int j = 1; j <= 2 * n + 1 - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
