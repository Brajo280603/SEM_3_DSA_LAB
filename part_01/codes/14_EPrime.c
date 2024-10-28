#include <stdio.h>
#include <Math.h>
#include <Stdbool.h>


bool isPrime(int num){
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    for(int i = 5; i <= sqrt(num); i+= 6){
        if(num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

bool isEPrime( int num){
    if(!isPrime(num)) return false;

    int digits = 1;
    int temp = num;

    while(temp >= 10){
        temp /= 10;
        digits *= 10;
    }

    while(digits > 1){
        num %= digits;
        if(!isPrime(num)) return false;
        digits /= 10;
    }

    return true;
}


int main(){
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    if(isEPrime(number)){
        printf("%d is an EPrime number. \n", number);
    }else{
        printf("%d is not an EPrime number. \n", number);
    }

    return 0;
}