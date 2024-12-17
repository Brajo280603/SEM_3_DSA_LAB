#include <stdio.h>

int main(){
    int array[] = {123,43,23,12,24};
    int size = sizeof(array)/sizeof(array[0]);
    int reverse_array[size];

    for(int i = size-1; i>= 0;i--){
        reverse_array[size-(i+1)] = array[i];
    }

    for(int i = 0;i<size;i++){
        printf("%d ",reverse_array[i]);
    }
    return 0;
}