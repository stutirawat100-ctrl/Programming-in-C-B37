/* LAB-3.2
Q2 WAP to display the table of a number input by the user.             */

#include <stdio.h>
int main() 
{
    
    int num,i;                                  // Declaration

    // User to enter a no.
    printf("Enter a number: ");
    scanf("%d",&num);

    // Print multiplication table
    for(i = 1; i <= 10; i++) 
    {
        int p=1;
        p=num*i;
        printf("%d * %d = %d\n", num, i, p);
    }

    return 0;
}                                               // END of program