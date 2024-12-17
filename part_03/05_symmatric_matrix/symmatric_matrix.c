#include <stdio.h>
#define MAX 10

int main(){
    int matrix[MAX][MAX],rows ,cols,i,j,is_symmetric = 1;
    printf("Enter rows and columns of matrix : ");
    scanf("%d %d",&rows, &cols);
    printf("Enter elements of matrix : \n");
    for(i = 0;i<rows;i++){
        for(j = 0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    if(rows != cols){
        printf("matrix is not symmetric(not square)\n");
        return 0;
    }

    for(i = 0;i<rows;i++){
        for(j = 0;j<cols;j++){
            if(matrix[i][j] != matrix[j][i]){
                is_symmetric = 0;
                break;
            }
        }
    }

    if(is_symmetric){
        printf("matrix is symmetric. \n");
    }else{
        printf("matrix is not symmetric.\n");
    }

    return 0;
}