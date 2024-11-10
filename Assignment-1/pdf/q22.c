// 22. Write a program for bubble sort.

#include <stdio.h>

int main() {
 int a[5]={1,5,4,8,19},temp;
  for (int i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    
    
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
    
    
    return 0;
}