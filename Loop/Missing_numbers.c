#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int result = (long long int) a * b * c;

        if (m == 0) {
            printf("0\n");
        } else if (m % result == 0) {
            printf("%lld\n", m / result);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
