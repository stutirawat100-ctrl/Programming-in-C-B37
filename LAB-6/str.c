/* LAB -6 
Q5 Develop a function REVERSE (str) that accepts a string argument. Write a C 
program that invokes this function to find the reverse of a given string.              */

#include <stdio.h>
#include <string.h>

// Function to reverse the string in-place
void REVERSE(char str[]) 
{
    int len = strlen(str);
    int i, j;
    char temp;

    // Swap characters from both ends of the string
    for (i = 0, j = len - 1; i < j; i++, j--) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() 
{
    char str[100];

    // Input string
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present (from fgets)
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    // Call REVERSE function
    REVERSE(str);

    // Output reversed string
    printf("Reversed string: %s\n ", str);

    return 0;
}
