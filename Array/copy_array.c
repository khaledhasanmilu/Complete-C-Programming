#include<stdio.h> 

int main() {
    int length1 = 0, length2 = 0;
    
    printf("Enter the size of array-1 and array-2: ");
    scanf("%d%d", &length1, &length2);
    
    // Ensure array2 can hold all elements of array1 if you plan to copy
    if (length2 < length1) {
        printf("Array-2 must be of equal or greater size than Array-1 for copying.\n");
        return 1; // Exit if sizes are incompatible
    }
           
    int arr[length1];
    int arr2[length2];

    // Input for array-1
    printf("Value for array-01: ");
    for (int i = 0; i < length1; i++) {
        scanf("%d", &arr[i]);
    }

    // Input for array-2 (optional if you intend to fully overwrite with array-1)
    printf("Value for array-02: ");
    for (int j = 0; j < length2; j++) {
        scanf("%d", &arr2[j]);
    }

    // Copy array-1 values to array-2
    for (int i = 0; i < length1; i++) {
        arr2[i] = arr[i];
    }

    // Display array-1
    printf("Array-1: ");
    for (int i = 0; i < length1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Display array-2
    printf("Array-2: ");
    for (int j = 0; j < length2; j++) {
        printf("%d ", arr2[j]);
    }
    printf("\n");

    return 0;
}
