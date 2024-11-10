/*8. Write a program that accepts the amount to be deposited, rate of interest and print the balance in the amount at the end of the year, until the balance exceeds twice the original amount of deposit(Assume annual compounding).*/

#include <stdio.h>

int main() {
    int deposite,amount,annual,year=0,roi=0.1;

    printf("Enter the deposite value: ");
    scanf("%d",&deposite);

    amount=deposite*2;

    annual=deposite;

    while (annual<amount)
    {
        annual=annual+(annual*0.1);
        year++;
        printf("The amount of %d year is: %d\n\n",year,annual);
    }

    printf("The double amount in year %d at the rate of 10 is: %d",year,annual);
    
 
    return 0;
}