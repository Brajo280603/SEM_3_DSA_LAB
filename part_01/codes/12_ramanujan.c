#include <stdio.h>
#include <Math.h>

int is_ramanujan(int n){
    int count = 0;

    for(int a = 1; a<= cbrt(n); a++){
        for(int b = a+1; b<= cbrt(n); b++){
            if(a*a*a + b*b*b == n){
                count++;
                printf("found pair : %d^3 + %d^3\n",a,b);
            }
        }
    }

    return count == 2;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(is_ramanujan(num)){
        printf("%d is a Ramanujan number \n", num);
    }else{
        printf("%d is not a Ramanujan number \n", num);
    }

    return 0;
}