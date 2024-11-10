/*27. Write a program to swap two numbers by using Call by Value.*/

#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swap in main: a = %d, b = %d\n", a, b);

    return 0;
}
