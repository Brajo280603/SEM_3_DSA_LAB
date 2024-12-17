#include <stdio.h>
#define N 3

int isSkewSymmetric(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != -matrix[j][i])
                return 0;
        }
    }
    return 1;
}

int main() {
    int matrix[N][N];

    // Input matrix elements in a single line per row
    printf("Enter the elements of a %dx%d matrix:\n", N, N);
    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check and output result
    if (isSkewSymmetric(matrix))
        printf("The matrix is skew-symmetric.\n");
    else
        printf("The matrix is not skew-symmetric.\n");

    return 0;
}
