/* LAB-2
Q2 Write a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32. */

#include <stdio.h>
int main()
{
    int C,F;                            // Decleration

    // User to input temperature in Celsius
    printf("Enter a temperature in Celsius: ");
    scanf("%d",&C);

    // Convert Temp.
    F=(((C*9)/5)+32);

    // Display Temperature in Fahrenheit
    printf("F = %d \n ",F);
    return 0;
}