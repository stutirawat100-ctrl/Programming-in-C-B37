/* LAB-1
Q3 Write a C program that prompts the user to enter their name and age.*/

#include <stdio.h>                           // Header file
int main()
{
     char name[20];                          // Decleration
     int age;

     // User to input name and age
     printf("Enter a name: ");
     scanf("%s",name);
     printf("Enter your age: ");
     scanf("%d",&age);

     printf("Hello %s, You are %d years old. \n ",name,age);          // Display message
     return 0;
}                                            // END program