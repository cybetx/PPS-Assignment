/*30. Write a program that print the address of a variable and its value.*/


#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Value of the variable: %d\n", num);
    printf("Address of the variable: %p\n", (void*)&num);

    return 0;
}
