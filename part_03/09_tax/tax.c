#include <stdio.h>

int main(){
    float income,tax = 0;
    printf("Enter your income : ");
    scanf("%f",&income);
    
    if(income <= 250000){
        tax = 0;
    }else if(income <= 500000){
        tax = (income - 250000)*0.05;
    }else if(income <= 1000000){
        tax = 12500 + (income - 500000)*0.1;
    }else{
        tax = 62500 + (income - 100000)*0.3;
    }

    printf("Income Tax : %.2f \n",tax);
    return 0;
}