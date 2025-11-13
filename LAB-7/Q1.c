/* LAB-7
Q1 1. Write a C program that uses functions to perform the following operations:  
a. Reading a complex number.  
b. Writing a complex number.  
c. Addition and subtraction of two complex numbers      

Note: represent complex number using a structure.                                   */

#include <stdio.h>

struct read_complex
{
    float real;
    float img;
};

// (a) Reading a complex number
struct read_complex read_complex()
{
    struct read_complex temp;
    scanf("%f %f", &temp.real, &temp.img);
    return temp;
}

// (b) Writing a complex number
void write_complex(struct read_complex c) 
{
    printf("Complex No. = %.2f + %.2fi\n", c.real, c.img);
}

// (c) Addition and subtraction
struct read_complex add_complex(struct read_complex a, struct read_complex b)
{
    struct read_complex result;
    result.real = a.real + b.real;
    result.img = a.img + b.img;
    return result;
}

struct read_complex sub_complex(struct read_complex a, struct read_complex b)
{
    struct read_complex result;
    result.real = a.real - b.real;
    result.img = a.img - b.img;
    return result;
}

int main()
{
    struct read_complex c1, c2, sum, diff;

    printf(" \nEnter the first complex number:\n");
    c1 = read_complex();

    printf("\nEnter the second complex number:\n");
    c2 = read_complex();

    printf("\nYou entered:\n");
    write_complex(c1);
    write_complex(c2);

    sum = add_complex(c1, c2);
    diff = sub_complex(c1, c2);

    printf("\nAddition Result:\n");
    write_complex(sum);

    printf("\nSubtraction Result:\n");
    write_complex(diff);

    return 0;
}
