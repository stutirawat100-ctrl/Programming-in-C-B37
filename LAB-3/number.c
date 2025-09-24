/* LAB-3.2
Q1 WAP to enter numbers till the user wants. At the end, it should display the count
of positive, negative, and Zeroes entered.                                           */

#include <stdio.h>
int main()
{
    int no, p=0, n=0, z=0;                       // Declaration
    char choice;

    do
    {
        // User to input a number
        printf("Enter a number: ");
        scanf("%d",&no);

        if(no>0)
            p++;

        else if(no<0)
            n++;

        else
            z++;

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

    }   while (choice == 'y' || choice == 'Y');

    // Output results
    printf("Positive numbers: %d\n", p);
    printf("Negative numbers: %d\n", n);
    printf("Zeroes: %d\n", z);

    return 0;

}                                                   // END of program