/* Q1 Declare different types of pointers (int, float, char) and initialize them with the 
addresses of variables. Print the values of both the pointers and the variables they 
point to.                                                                               */

#include <stdio.h>

int main() 
{
    int a, *ptr1;
    float b, *ptr2;
    char c, *ptr3;
    
    printf("Enter an integer: ");
    scanf("%d", &a);
    
    printf("Enter a float: ");
    scanf("%f", &b);
    
    printf("Enter a character: ");
    scanf(" %c", &c);                       // space before %c to ignore leftover newline

    // Assign addresses to pointers
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;

    // Print values and addresses
    printf("\nInteger variable value: %d     \nAddress stored in ptr1: %p      \nValue at ptr1: %d\n", a, ptr1, *ptr1);
    printf("\nFloat variable value: %.2f     \nAddress stored in ptr2: %p      \nValue at ptr2: %.2f\n", b, ptr2, *ptr2);
    printf("\nCharacter variable value: %c   \nAddress stored in ptr3: %p      \nValue at ptr3: %c\n ", c, ptr3, *ptr3);

    return 0;
}
