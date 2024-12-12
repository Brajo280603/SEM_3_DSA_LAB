#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int frequency[10] = {0};

    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    printf("Digit Frequency\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, frequency[i]);
    }

    return 0;
}