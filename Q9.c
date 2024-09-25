// Write a program that will find sum of odd numbers from an array. 

#include <stdio.h>
void main()
{
int arr[100], n, i, sum = 0;
printf("Enter the size of the array: \n");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
printf("Element-[%d]: \n", i);
scanf("%d", &arr[i]);
}
for (i = 0; i < n; i++)
{
if (arr[i] % 2 != 0)
{
sum += arr[i];
}
}
printf("The final sum is: %d", sum);
}

