/*10. Write a program to find out sum and average of random numbers.*/


#include <stdio.h>

int main() {
    int num[10]={1,2,3,4,5,1,2,3,4,5},sum=0,avg;

    // printf("Enter the numbers in spaces or enter gap: \n");
    

    for (int i = 0; i < 10; i++)
    {
        sum+=num[i];
    }

    printf("The sum is: %d\n",sum);

    printf("And The average is: %d",avg=sum/10);
    
 
    return 0;
}