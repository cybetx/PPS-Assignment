/*16. Write a program to print the following pattern
*
**
***
****
*****
*/

#include <stdio.h>

int main() {
    

    /*new code*/

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
                printf("*");
        }
        printf("\n");
        
    }
    return 0;
}