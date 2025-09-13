/* LAB-2
Q1 Write a C program to calculate the area and perimeter of a rectangle 
based on its length and width. */

#include <stdio.h>
int main()
{
    float l,b,A,P;                          // Decleration

    // User to input length and width of rectangle
    printf("Enter length of rectangle: ");
    scanf("%f",&l);
    printf("Enter width of rectangle: ");
    scanf("%f",&b);

    A=l*b;                                  // Compute Area of rectangle

    P=2*(l+b);                              // Compute Perimeter of a rectangle

    // Display Area and Perimeter
    printf("\nArea of rectangle = %.2f \n",A);
    printf("Perimeter of rectangle = %.2f \n ",P);

    return 0;                               // END of program
}
