#include <stdio.h>

int check_neon_number(int num){
    int square = num * num;
    int n = square;
    int digit;
    int sum = 0;

    while(n != 0){
        digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }

    if(sum == num){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    int num = 9;
    int ans = check_neon_number(num);
    if(ans == 1){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}
