/*15. Write a program to print the number 5, five times; number 4, four times; number 3, three times; and so on number 1, once.*/

#include <stdio.h>

int main() {
    char num[6]={'0','1','2','3','4','5'};

    /*New code*/
    for (int i = 0; i < 6; i++)
    {
        num[i];
        for (int j = 0; j < i; j++)
        {
            printf("%c",num[i]);
        }
        printf("\n");
    }
    return 0;
}