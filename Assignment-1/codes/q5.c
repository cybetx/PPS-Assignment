/*5. Write a program that accepts input any number and find out and print reverse of that number*/

#include <stdio.h>

int main() {
 int num,revnum=0;
    printf("Enter the number more than '9': ");
    scanf("%d",&num);

    if (num<9)
    {
      printf("Enter the number which is greater than 9 so we can reverse it...");
    }

    else{
          while(num!=0)
          {
            revnum=revnum*10+(num%10);
            num=num/10;
          }
          printf("%d",revnum);
          
    }
    

   
    return 0;
}