#include <stdio.h>
#include <Math.h>

int main(){
    int num, original_num, remainder, sum, result = 0, count = 0;

    printf("enter a three digit integer : ");
    scanf("%d", &num);

    original_num = num;
    while(original_num != 0){
        original_num /= 10;
        count++;
    }

    original_num = num;
    while(original_num != 0){
        int digit = original_num % 10;
        sum += pow(digit, count);
        original_num /= 10;
    }



    if((int)(sum + 0.5) == num){
        printf("%d is a weak Armstrong number.", num);
    } else {
        printf("%d is not a weak Armstrong number", num);
    }
    
    return 0;
}