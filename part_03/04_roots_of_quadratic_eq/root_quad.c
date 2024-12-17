#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficient a, b and c : ");
    scanf("%f %f %f",&a,&b,&c);
    
    discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        
        printf("Roots are real and different : %.2f and %.2f \n",root1,root2);
    }else if(discriminant == 0){
        root1 = root2 = -b/(2*a);
        printf("Roots are real and the same : %.2f\n",root1);
    }else{
        float real_part = -b / (2*a);
        float imaginary_part = sqrt(-discriminant)/(2*a);
        printf("Roots are complex : %.2f + %.2fi and %.2f - %.2fi\n", real_part,imaginary_part,real_part,imaginary_part);
    }

    return 0;
    
}