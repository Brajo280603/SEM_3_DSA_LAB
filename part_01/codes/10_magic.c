#include <stdio.h>

int main(){
    int n, temp , rev = 0, digit , sum_of_digits = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;
    while( temp > 0){
        sum_of_digits = sum_of_digits + temp % 10;
        temp = temp / 10;
    }

    temp = sum_of_digits;
    printf("\n The sum of digits = %d", temp);

    while( temp > 0 ){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    printf("\n The reverse of the digits = %d", rev);

    printf("\n The product of %d * %d = %d", sum_of_digits, rev, sum_of_digits * rev);

    if(rev * sum_of_digits == n){
        printf("\n %d is a magic number", n);
    }else{
        printf("\n %d is not a magic number", n);
    }
    
    return 0;
}