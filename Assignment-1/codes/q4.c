/*4. Write a program that accepts two integer for a co-ordinate point and determines its quadrant.*/

#include <stdio.h>

int main() {
 int x,y;
    printf("Enter the value of x-axis: ");
    scanf("%d",&x);

    printf("Enter the value of y-axis: ");
    scanf("%d",&y);

    if (x==0 && y==0)
    {
        printf("The pointer is at center");

    }

    else if (x>0 && y==0)
    {
        printf("The code is at positive x-axis");
    }

    else if (x<0 && y==0)
    {
        printf("The code is at negetive x-axis");
    }

    else if (x==0 && y>0)
    {
        printf("The code is at positive y-axis");
    }

    else if (x==0 && y<0)
    {
        printf("The code is at negetive y-axis");
    }
    
    
    else if (x>0 && y>0)
    {
        printf("The point is at 1st quadrant...");
    }

    else if (x<0&&y>0)
    {
        printf("The point is at 2nd quadrant...");
    }

    else if (x,y<0)
    {
        printf("The point is at 3rd quadrant...");
    }

    else
    {
        printf("The point is at 4th quadrant...");
    }
    
    
    
    return 0;
}