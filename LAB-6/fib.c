/* LAB - 6
Q3 Develop a recursive function FIBO (num) that accepts an integer argument. Write 
a C program that invokes this function to generate the Fibonacci sequence up to 
num.                                                                                     */

#include <stdio.h>

void fib(int f, int s, int n)
{
    if(s==n)
        return ;
    else
    {
        printf("%d ",f+s);
        fib(s,f+s,n);
    }
}

int main()
{
    int num;
    printf(" \nEnter a number: ");
    scanf("%d",&num);

    printf("\nFibonacci Series: \n");
    fib(1,0,num);
    printf("\n ");

    return 0;
}