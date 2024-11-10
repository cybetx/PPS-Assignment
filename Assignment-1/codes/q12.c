/*12. Write a program to accepts input N Random number and find out larger and smaller number.*/

#include <stdio.h>

int main() {
    int n,max,min;
    

    printf("How many number you want to enter: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter the %d numbers: ",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    max=num[0];
    min=num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }

        if (num[i]<min)
        {
            min=num[i];
        }
        
        
    }

    printf("The largest number is %d.\n",max);
    printf("The smallest number is %d.",min);
    
    
 
    return 0;
}