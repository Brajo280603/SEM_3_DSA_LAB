#include <stdio.h>

int main(){
    int i, n1 = 220, n2 = 284, div_sum1 = 0 , div_sum2 = 0;

    for(i = 1;i < n1; i++){
        if(n1 % i == 0){
            div_sum1 = div_sum1 + i;
        }
    }

    for(int i = 1;i< n2;i++){
        if(n2 % i == 0){
            div_sum2 = div_sum2 + i;
        }
    }

    if((n1 == div_sum2) && (n2 == div_sum1)){
        printf("%d and %d are Amicable numbers \n", n1, n2);
    }else {
        printf("%d and %d are not Amicable numbers \n", n1, n2);
    }

    return 0;
}