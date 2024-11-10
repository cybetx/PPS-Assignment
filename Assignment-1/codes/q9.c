/*9. Write a program to print the sum of all odd integer between 1 to 50.*/

#include <stdio.h>

int main() {
    int num,sum=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);

    for ( int i = 1; i <= num; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
            
        }
        
    }
    printf("The sum of odd number between 1 to %d is: %d",num,sum);
    
    return 0;
}