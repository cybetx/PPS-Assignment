/*2. IN A COMPANY AN EMPLOYEE IS PAID AS UNDER: IF HIS
BASIC SALARY IS LESS THAN 30000, THEN HRA=10% OF THE
BASIC SALARY AND DA=90% OF THE BASIC SALARY. IF HIS
SALARY IS EITHER EQUAL TO OR ABOVE 30000’ THEN
HRA=5000 AND DA=98% OF BASIC SALARY. IF THE
EMPLOYEE’S SALARY IS INPUT THROUGH THE KEYBOARD,
WRITE A PROGRAM TO FIND HIS GROSS salary
*/


#include <stdio.h>

int main() {
 int salary,gross,hra,da;

 printf("Enter your salary: ");

 scanf("%d",&salary);

 if (salary<30000)
 {
    hra=salary*0.1;
    da=salary*0.90;
    gross=salary+da+hra;

    printf("Your Gross salary is:%d",gross);
 }

 else if (salary>30000)
 {
    hra=5000;
    da=salary*0.98;
    gross=salary+da+hra;

    printf("Your Gross salary is:%d",gross);
 }
 


    
    return 0;
}