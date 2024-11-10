/*6. Write a program that accepts your name and print it for the desired number of times.*/

#include <stdio.h>

int main() {
    char name[10];
    int times;

    printf("Enter your name: ");
    scanf("%s",&name);
    

    printf("Enter the number of times you want to repeat your name: ");
    scanf("%d",&times);

    for (int i = 1; i <= times; i++)
    {
        printf("%s\n",name);
    }
    
    
 
    return 0;
}