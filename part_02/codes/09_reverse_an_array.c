#include <stdio.h>

int main(){
    int array[] = {123,43,23,12,24};
    int reverse_array[sizeof(array)/sizeof(array[0])];

    for(int i = (sizeof(array)/sizeof(array[0]))-1; i>= 0;i--){
        reverse_array[(sizeof(array)/sizeof(array[0]))-(i+1)] = array[i];
    }

    for(int i = 0;i<sizeof(reverse_array)/sizeof(reverse_array[0]);i++){
        printf("%d ",reverse_array[i]);
    }
    return 0;
}