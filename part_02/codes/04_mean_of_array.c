#include <stdio.h>

int main(){
    int array[] = {23,53,12,32,13,87,56};
    int mean = 0, sum = 0;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i = 0;i<size;i++){
        sum += array[i];
    }

    mean = sum/size;

    printf("the mean of the array is %d", mean);

    return 0;
}