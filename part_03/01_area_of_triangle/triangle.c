#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,s,area;
    printf("Enter the lengths of the sides of the triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    if((a + b) > c && (a + c) > b && (b+c)> a){
        s = (a + b + c) / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is : %.2f\n",area);
    } else {
        printf("the sides does not form a triangle.\n");
    }
    return 0;
}


