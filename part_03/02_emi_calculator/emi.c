#include <stdio.h>
#include <math.h>

int main(){
    float principal, rate , tenure, emi;
    printf("Enter the principal amount : ");
    scanf("%f",&principal);

    printf("Enter Rate of interest(per annum): ");
    scanf("%f",&rate);

    printf("Enter Tenure in months : ");
    scanf("%f",&tenure);

    rate = rate/(12*100);

    emi = (principal * rate * pow(1 + rate, tenure))/(pow(1 + rate, tenure) - 1);

    printf("EMI : %.2f\n",emi);

    return 0;
}
