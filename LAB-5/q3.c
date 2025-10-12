#include <stdio.h>
int main()
{
    int n, i, num, count = 0;

    // Input size of the array
    printf(" \nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the number to find frequency
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }

    // Output result
    printf("\nThe frequency of %d is: %d\n ", num, count);

    return 0;
}
