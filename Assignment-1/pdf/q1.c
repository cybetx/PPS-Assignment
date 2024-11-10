/*1. Write a program accepts two floating point number and compute
their ratio. If the ratio is greater than zero then it exchanges the
contain of these numbers.*/



#include <stdio.h>

int main() {
    float a,b,result,temp;
    printf("Enter the first number: ");
    scanf("%f",&a);

    printf("Enter the second number: ");
    scanf("%f",&b);

    printf("The number is a=%.1f and b=%.1f\n",a,b);
    result=a/b;

    if (result>0)
    {
        temp=a;
        a=b;
        b=temp;

        printf("The number revesed a=%.1f and b=%.1f",a,b);
    }
    

               

    return 0;
}