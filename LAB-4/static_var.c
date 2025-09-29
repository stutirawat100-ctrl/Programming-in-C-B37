/* LAB-4
Q4 Declare a static local variable inside a function. Observe how its value 
persists across function calls.                                             */

#include <stdio.h>

void Func() 
{
    // Static local variable
    static int counter = 0;

    // Normal local variable (for comparison)
    int normalVar = 0;

    counter++;
    normalVar++;

    printf("Static counter = %d, Normal var = %d\n", counter, normalVar);
}

int main() 
{
    printf("Calling Func() 3 times:\n");

    Func();  // counter = 1, normalVar = 1
    Func();  // counter = 2, normalVar = 1
    Func();  // counter = 3, normalVar = 1

    return 0;
}                                                   // END of program


