/* LAB-6
Q1 1. Develop a recursive and non-recursive function FACT(num) to find the factorial of 
a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n
1). Using this function, write a C program to compute the binomial coefficient. 
Tabulate the results for different values of n and r with suitable messages.                */

#include <stdio.h>
long FACT_recursive(int num)
{
    if(num==0)
    return 1;
    else
    return num * FACT_recursive(num-1);
}

long FACT_non_recursive(int num)
{
    int f=1;
    for(int i=1; i<=num; i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int n, r;
    long n_fact, r_fact, nr_fact, bin_coeff;

    printf(" \nEnter value of n and r (n >= r): ");
    scanf("%d %d",&n,&r);

    if (r > n || n < 0 || r < 0) 
    {
        printf("Invalid input! Ensure n >= r and n, r are non-negative.\n");
        return 0;
    }

    printf("\nBINOMIAL COEFFICIENT : \n");
    // Using Recursive
    n_fact = FACT_recursive(n);
    r_fact = FACT_recursive(r);
    nr_fact = FACT_recursive(n - r);
    bin_coeff = n_fact / (r_fact * nr_fact);

    printf("\n====== Using Recursive Factorial ======\n");
    printf("n!               r!                   C(%d, %d)\n",n,r);
    printf("%ld              %ld                   %ld  \n",n_fact,r_fact,bin_coeff);

    
    // Using Non-Recursive
    n_fact = FACT_non_recursive(n);
    r_fact = FACT_non_recursive(r);
    nr_fact = FACT_non_recursive(n - r);
    bin_coeff = n_fact / (r_fact * nr_fact);

    printf("\n====== Using Non-Recursive Factorial ======\n");
    printf("n!               r!                   C(%d, %d)\n",n,r);
    printf("%ld              %ld                   %ld  \n ",n_fact,r_fact,bin_coeff);

    return 0;
}                               // END of program

