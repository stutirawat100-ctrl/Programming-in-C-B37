/* LAB-4
Q2 Declare a local variable inside a function and try to access it outside the function.
Compare this with accessing the global variable from within the function.                   */

#include <stdio.h>
int g=40;                                   // Declaration of a Global Variable

void local()
{
    int l=60;                                   // Declaration of a Local variable

    printf("\nInside Function: \n");
    printf("LOCAL VARIABLE = %d\n",l);          // To print local variable 
    printf("GLOBAL VARIABLE = %d\n ",g);         // To print global variable

}

int main()
{
    printf("\nOutside Function: \n");
    printf("GLOBAL VARIABLE = %d\n ",g);           // To print global variable 
    /* printf("LOCAL VARIABLE = %d",l);             
    THIS STATEMENT SHOWS AN ERROR BECAUSE LOCAL VARIABLE CANNOT BE ACCESSED IN MAIN FUNCTION.  */

    // Function Calling
    local();

    return 0;
}                                               // END of program