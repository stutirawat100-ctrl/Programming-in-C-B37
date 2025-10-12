#include <stdio.h>

int main()
{
int n, i;						// Step 1: Input size of array
printf(" \nEnter number of integers: ");
scanf("%d", &n);
if (n < 2)
{
printf("At least two numbers are required.\n");
return 0;
}
int arr[n];							// Step 2: Input elements
printf("Enter %d integers:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

// Step 3: Find largest and second largest
int largest, second;
if (arr[0] > arr[1])
{
largest = arr[0];
second = arr[1];
}
else
{
largest = arr[1];
second = arr[0];
}

for (i = 2; i < n; i++)
	{


if (arr[i] > largest)
{
second = largest;
largest = arr[i];
}
else if (arr[i] > second && arr[i] != largest)
{
second = arr[i];
}
	}
printf("The second largest number is: %d\n ", second);
return 0;
}										// END of program
