/* LAB-3.1
Q1 WAP to take check if the triangle is valid or not. If the validity is established, do
   check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of
   the triangle as input from a user.                                                        */

#include <stdio.h>
int main()
{
    int a, b, c;                    // Declaration

    // User to enter sides of a triangle
    printf("Enter side of a triangle: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    // Check if triangle is valid or not
    if(((a+b)>c) && ((a+c)>b) && ((b+c)>a))
    {
        printf("Triangle is valid. \n");
        if((a==b) && (b==c))                        // Check if triangle is an Equilateral Triangle
        {
            printf("Equilateral Triangle");
        }

        else if (a == b || b == c || a == c)        // Check if triangle is an Isosceles Triangle
        {
            printf("Isosceles Triangle.");
        }

        else                                        // Check if triangle is a Scalene Triangle
        {
            printf("Scalene Triangle");
        }
    }
    else
    printf("Triangle is not valid.");

    return 0;
}                                       // END of program
