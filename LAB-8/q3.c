/* Q3 Write a function that accepts pointers as parameters. Pass variables by reference 
using pointers and modify their values within the function.                          */

#include <stdio.h>

// Function that accepts pointers as parameters
void inc_dec(int *ptr1, int *ptr2)        // Formal Parameters
{
    (*ptr1)++;
    (*ptr2)--;
    printf("\nInside the Function: \n");
    printf("a = %d              b = %d\n",*ptr1, *ptr2);
}

// Main Function()
int main()
{
    int a, b;
    printf(" \nEnter two Numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    // Pass variables by Reference
    inc_dec(&a,&b);                     // Actual Parameters                 

    printf("\nInside the Caller: \n");
    printf("a = %d              b = %d\n ", a, b);

    return 0;
}