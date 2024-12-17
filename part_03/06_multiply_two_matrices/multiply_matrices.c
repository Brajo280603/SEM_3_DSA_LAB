#include <stdio.h>

int main() {
    int row1, col1, row2, col2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int mat1[row1][col1], mat2[row2][col2], result[row1][col2];

    printf("Enter elements of the first matrix (%dx%d):\n", row1, col1);
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of the second matrix (%dx%d):\n", row2, col2);
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}