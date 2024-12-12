#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int duplicateFound = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                duplicateFound = 1;
                break;
            }
        }
        if (duplicateFound) break;
    }

    if (duplicateFound) {
        printf("Duplicate value found in the array.\n");
    } else {
        printf("No duplicate value found in the array.\n");
    }

    return 0;
}