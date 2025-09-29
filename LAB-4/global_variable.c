/* LAB-4
Q1 Declare a global variable outside all functions and use it inside various functions to
understand its accessibility.                                                               */

#include <stdio.h>
int n1, n2;                                  // Declaration of Global Variable

int add()
{
    return (n1+n2);                          // Using Global variable inside a function
}

int sub()
{
    return (n1-n2);                        // Using Global variable inside a function
}

int pro()
{
    return (n1*n2);                        // Using Global variable inside a function
}

int div()
{
    return (n1/n2);                        // Using Global variable inside a function
}         

int main()
{   
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    // Function Calling
    int a= add();
    printf("\nSUM = %d\n",a);

    int s= sub();
    printf("SUBTRACTION = %d\n",s);

    int p= pro();
    printf("PRODUCT = %d\n",p);

    int d= div();
    printf("DIVISION = %d\n ",d);

    return 0;
}                                         // END of program
