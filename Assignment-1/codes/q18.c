/*

18. Write a program that print table or 2 to 10 in following format.
2 3 4 . . . . . . . . . . . . . 10
4 6 8 . . . . . . . . . . . . . 20
6 9 12 . . . . . . . . . . . . . 30
. . . . . . . . . . . . . . . . .  . 
. . . . . . . . . . . . . . . . .  . 
20 30 40 . .  .  .  .  .  .  .  . .100

*/

#include <stdio.h>

int main() {
    int table;

    for (int i = 1; i < 11; i++)
    {
        table=i;
       for (int j = 1; j < 11; j++)
       {
        printf("%d ",table*j);
       }
       printf("\n");

       
    }
    
 
    return 0;
}