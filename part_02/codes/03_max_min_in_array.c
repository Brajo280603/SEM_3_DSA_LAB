#include <stdio.h>

int main(){
    int array[] = {34,87,21,57,32,19};


    int max = array[0], min = array[0];

    for(int i = 0;i<(sizeof(array)/sizeof(array[0])); i++){
        if(max < array[i]){
            max = array[i];
        }

        if(min > array[i]){
            min = array[i];
        }
    }

    printf("the max element is %d\n",max);
    printf("the min element is %d",min);

    return 0;
}