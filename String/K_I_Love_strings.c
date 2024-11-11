#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char str1[1000], str2[1000];
        scanf("%s %s", str1, str2);

        int size1 = strlen(str1);
        int size2 = strlen(str2);

        for (int i = 0; i < size1 || i < size2; i++) {
            if (i < size1) {
                printf("%c", str1[i]);
            }
            if (i < size2) {
                printf("%c", str2[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
