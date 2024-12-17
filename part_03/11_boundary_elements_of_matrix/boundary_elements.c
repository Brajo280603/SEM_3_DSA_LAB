#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < cols; i++) printf("%d ", matrix[0][i]);

    for (int i = 1; i < rows - 1; i++) printf("%d ", matrix[i][cols - 1]);

    if (rows > 1) 
        for (int i = cols - 2; i >= 0; i--) printf("%d ", matrix[rows - 1][i]);

    if (cols > 1) 
        for (int i = rows - 2; i > 0; i--) printf("%d ", matrix[i][0]);

    printf("\n");
    return 0;
}
