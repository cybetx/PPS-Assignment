/*7. WRITE A PROGRAM THAT ILLUSTRATES THE SWITCH STATEMENT FOR COMPUTING THE AREA OF DIFFERENT GEOMETRICAL FIGURES SUCH AS CIRCLE, SQUARE, TRIANGLES, RECTANGLE, ETC. IT DISPLAYS THE MENU OF THE FIGURE CODES OF DIFFERENT FIGURES. ON CHOOSINGA PARTICULAR FIG_CODE, THE CORRESPONDING PARAMETERS REQUIRED BY THAT FIGURE ARE ACCEPTED AND PROCESSED. FINALLY, THE AREA IS DISPLAYED.*/

#include <stdio.h>

int main() {
    char shape;
    float area;
    int r, a, l, b, h;

    printf("Enter the shape you want to find the area: \n'c':circle\n's':square\n'r':rectangle\n't':triangle:  ");
    scanf("%c",&shape);

    switch (shape)
    {
    case 'c':
        
        printf("Enter the radius of the circle: ");
        scanf("%d",&r);

        area=3.14*r*r;
        printf("The area of the cicle of radius %d is: %.2f",r,area);
        break;

    case 's':
        
        area=a*a;
        printf("Enter the side of the square: ");
        scanf("%d",&a);

        printf("The area of the square of side %d is: %.2f",a,area);
        break;

    case 'r':
        
        area=l*b;
        printf("Enter the length: ");
        scanf("%d",&l);

        printf("Enter the breadth: ");
        scanf("%d",&b);

        printf("The area of the rectangle of length %d and breadth %d is: %.2f",l,b,area);
        break;

    case 't':
        
        area=0.5*b*h;
        printf("Enter the value of base: ");
        scanf("%d",&b);

        printf("Enter the value of height: ");
        scanf("%d",&h);

        printf("The area of the triangle of base %d and %d height is: %.2f",b,h,area);
        break;    
    
    default:printf("Enter given shape in small case,and replay the program");
        break;
    }
 
    return 0;
}
