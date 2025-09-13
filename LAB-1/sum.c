/* LAB-1
Q4 Write a program to add two numbers,take number from the user.*/

#include <stdio.h>                      // Header file
int main()
{
    int num1,num2,sum=0;                // Declaration

    // User to input two numbers
    printf("Enter first no.  ");
    scanf("%d",&num1);
    printf("Enter second no.  ");
    scanf("%d",&num2);

    // Compute SUM of two numbers
    sum=num1+num2;

    printf("SUM = %d \n ",sum);         // Display the SUM
    return 0;
}                                       // END program