/* LAB-4
Q3 Declare variables within different code blocks (enclosed by curly braces) 
and test their accessibility within and outside those blocks.                    */

#include <stdio.h>

int main() 
{
    // Variable declared in main block
    int a = 10;

    printf("Inside main block:\n");
    printf("a = %d\n", a);                      // Accessible

    {
        // Variable declared inside 1st inner block
        int b = 20;
        printf("\nInside 1st inner block:\n");
        printf("a = %d\n", a);                  // Accessible (from outer block)
        printf("b = %d\n", b);                  // Accessible (declared here)
    }

    // Accessing 'b' outside its block
    printf("\nOutside inner block:\n");
    // printf("b = %d\n", b);                   // ERROR: 'b' is undeclared

    // 2nd inner block
    {
        int c = 30;
        printf("\nInside 2nd inner block:\n");
        printf("c = %d\n ", c);                  // Accessible
    }
    // printf("c = %d\n", c);                   // ERROR: 'c' is undeclared

    return 0;
}                                               // END of program
