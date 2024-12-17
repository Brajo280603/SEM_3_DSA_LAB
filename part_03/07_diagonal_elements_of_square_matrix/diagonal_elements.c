#include <stdio.h>
#define MAX 10

int main(){
    int matrix[MAX][MAX],r,c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter matrix elements : \n");
    for(int i = 0;i<r; i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Diagonal elements are : ");
    for(int i = 0;i<r;i++){
        printf("%d",matrix[i][i]);
    }
    printf("\n");

    return 0;
}