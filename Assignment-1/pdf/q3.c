// 3. Write a program accept three integer and print the greatest number amongst them.

#include <stdio.h>

int main() {
 int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("Enter the Third number: ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("First number '%d' is Greatest...",a);
    }

    else if (b>a && b>c)
    {
        printf("Second number '%d' is Greatest...",b);
    }

    else{
        printf("Third number '%d' is Greatest...",c);
    }
    
    
    return 0;
}