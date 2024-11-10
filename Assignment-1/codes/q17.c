/*
17. Write a program to generate the following number pattern
1
2 3 2
3 4 5 4 3
4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include <stdio.h>

int main() {
    int num;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("%d",i);
        }
        
        printf("\n");
    }
    
 
    return 0;
}