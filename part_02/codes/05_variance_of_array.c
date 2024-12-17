#include <stdio.h>
#include <Math.h>

int main(){
    int array[] = {32, 123,54 , 59, 30, 39, 145};
    
    float variance = 0,mean = 0;
    int sum = 0;
    int total_values = sizeof(array)/sizeof(array[0]);

    for(int i = 0;i<total_values;i++){
        sum += array[i];
    }

    mean = round((float)sum/total_values);

    for(int i = 0;i<total_values;i++){
        variance += round((float) pow(((float)array[i] - mean),2));
    }

    variance /= (total_values);
    printf("the variance of the array is %.2f",variance);

    return 0;
}