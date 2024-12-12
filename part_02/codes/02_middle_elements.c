#include <stdio.h>

int main(){
    int array[] = {12,34,32,21,45,55};

    int elements = sizeof(array) / sizeof(array[0]);

    if(elements % 2 == 0){
        printf("Middle elements are %d and %d",array[(elements/2) - 1], array[elements/2]);
    }else{
        printf("Middle element is %d",array[elements/2]);
    }

    return 0;
}