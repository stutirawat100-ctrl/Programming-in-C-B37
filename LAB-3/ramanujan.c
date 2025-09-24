/* LAB-3.2
Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways.
Q5 WAP in c to print all such numbers up to a reasonable limit.                                               */
 
#include <stdio.h>

int main() 
{
    int L;
    printf("Enter limit: ");
    scanf("%d", &L);

    // Store pairs and their cube sums
    for (int a = 1; a <= L; a++) 
    {
        for (int b = a; b <= L; b++) 
        {
            int sum1 = a*a*a + b*b*b;

            for (int c = a; c <= L; c++) 
            {
                for (int d = c + 1; d <= L; d++) 
                {
                    int sum2 = c*c*c + d*d*d;

                    if (sum1 == sum2 && (a != c || b != d)) 
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}                                                   // END of program
