/* Q2 Perform pointer arithmetic (increment and decrement) on pointers of different datatypes.
Observe how the memory addresses change and the effects on data access.        */

#include <stdio.h>
int main()
{
    int a, *ptr1;
    float b, *ptr2;
    char c, *ptr3;
    
    printf(" \nEnter a number: ");
    scanf("%d",&a);

    printf("Enter a float: ");
    scanf("%f", &b);
    
    printf("Enter a character: ");
    scanf(" %c", &c);  

    // Assign addresses to pointers
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;

    printf("\n-----Original-----");
    printf("\n Integer                    Float                     Charecter");
    printf("\n a = %d                    b = %f             c = %c", a, b, c);
    printf("\n ptr1 = %p    ptr2 = %p   ptr3 = %p \n", ptr1, ptr2, ptr3);

    ptr1++;ptr2++;ptr3++;
    printf("\n-----After Increment-----");
    printf("\n Integer                    Float                     Charecter");
    printf("\n a = %d                    b = %f             c = %c", a, b, c);
    printf("\n ptr1 = %p    ptr2 = %p   ptr3 = %p \n", ptr1, ptr2, ptr3);
    
    ptr1--;ptr2--;ptr3--;
    printf("\n-----After Decrement-----");
    printf("\n Integer                    Float                     Charecter");
    printf("\n a = %d                    b = %f             c = %c", a, b, c);
    printf("\n ptr1 = %p    ptr2 = %p   ptr3 = %p \n", ptr1, ptr2, ptr3);

    return 0;
}