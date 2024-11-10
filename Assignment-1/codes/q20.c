/*20. Write a program to use various input output functions.*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character from fgets input

    char greeting[50] = "Hello ";
    strcat(greeting, name);

    printf("%s\n", greeting);

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    double squareRoot = sqrt((double)num);
    printf("Square root of %d is %.2f\n", num, squareRoot);

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isalpha(ch)) {
        printf("'%c' is an alphabet character.\n", ch);
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    time_t currentTime;
    time(&currentTime);
    printf("Current date and time: %s", ctime(&currentTime));

    return 0;
}
