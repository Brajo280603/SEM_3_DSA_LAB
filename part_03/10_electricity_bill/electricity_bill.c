#include <stdio.h>

int main(){
    int units;
    float bill;
    printf("Enter total units consumed : ");
    scanf("%d",&units);

    if(units <= 25){
        bill = units *3;
    }else if(units <= 35){
        bill = 25*3 + (units - 25)*4;
    }else if(units <= 45){
        bill = 25*3 + 10*4 + (units - 35)*5;
    }else if(units <= 55){
        bill = (25*3) + (10*4) + (10*5) + ((units - 45)*6);
    }else{
        bill = 25*3 + 10*4 + 10*5 + 10*6 + (units - 55)*7;
    }

    printf("Electricity Bill : Rs %.2f\n",bill);

    return 0;
}