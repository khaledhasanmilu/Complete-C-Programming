#include<stdio.h>
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    
    // Reading the array elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // First swap (first and last column)
    for (int i = 0; i < n; i++) {
        int temp = arr[i][0];
        arr[i][0] = arr[i][m-1];
        arr[i][m-1] = temp;
    }
    // Second swap (first and last row)
    for (int j = 0; j < m; j++) {
        int temp = arr[0][j];
        arr[0][j] = arr[n-1][j];
        arr[n-1][j] = temp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
