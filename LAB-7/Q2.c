/* LAB-7
Q2 2. Write a C program to compute the monthly pay of 3 employees using each 
employee‗s name, basic pay. The DA is computed as 52% of the basic pay. 
Gross-salary (basic pay + DA). Print the employees name and gross salary.   */

#include <stdio.h>
struct Employee
{
    char name[50];
    float basic_pay;
};

void display(struct Employee e, float gs)
{
    printf("Name = %s                   Gross Salary = %.2f\n",e.name,gs);
}


int main()
{
    float gs=0, DA=0;
    struct Employee emp[5];
    printf("\nEnter Employees Details: \n \n");
    for(int i=0; i<5; i++)
    {
        printf("Enter the name of the Employee: ",i+1);
        scanf("%s",emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f",&emp[i].basic_pay);
    }

    printf(" \n                  .\n");
    printf("        // After 100 User Inputs:\n");
    printf("\n                  .\n \n");

    for(int i=0; i<5; i++)
    {
        DA = (emp[i].basic_pay)*(0.52);
        gs = DA+emp[i].basic_pay;
        display(emp[i], gs);
    }
     printf(" \n                  .\n");
    printf("        // So On \n ");
    return 0;
}   
