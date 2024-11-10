/*13. Write a program that accepts any number and check that the number is Prime or Not Prime.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if (num==2 || num==3)
    {
        printf("%d is a prime number.",num);
    }
    
    else if (num%num==0 && num%2!=0 && num%3!=0)
    {
        printf("%d is a prime number.",num);
    }

    else
    {
        printf("%d is not a prime number.",num);
    }
    
    
 
    return 0;
}