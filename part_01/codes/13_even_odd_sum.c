#include <stdio.h>

int main(){
    int n,r, s1 = 0, s2 = 0,s3 = 0, c = 0;
    scanf("%d",&n);

    while(n != 0){
        c++;
        r = n % 10;

        s3 = s3 + r;
        if(c%2 == 0){
            s1 = s1+r;
        }else{
            s2 = s2+r;
        }
            n = n/10;
    }

    printf("Sum of Digits : %d\n",s3);

    printf("Sum of Digits in even place : %d\n", s1);

    printf("Sum of Digits in odd place : %d\n", s2);

    return 0;
}