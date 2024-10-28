#include <stdio.h>

int main(){
    int temp, square, count = 1, number;
    printf("enter any number : ");
    scanf("%d", &number);

    temp = number;
    square = number* number;
    printf("Square of a number %d", square);
    
    while(number != 0){
        count = count *10;
        number = number /10;
    }

    if(square % count == temp){
        printf("\n so it is Automorphic number");
    }else{
        printf("\n so it is no Automorphic number");
        return 0;
    }
}