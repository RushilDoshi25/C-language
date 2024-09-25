/*
Write a program to enter five numbers using array and rearrange the array in the reverse 
order. 
*/

#include <stdio.h>
void main()
{
int arr[100], n = 5, i, temp;
for (i = 0; i < n; i++)
{
printf("Element-[%d]: \n", i);
scanf("%d", &arr[i]);
}
printf("Before:\n");
for (i = 0; i < n; i++)
{
printf("%d\t", arr[i]);
}
for (i = 0; i < n / 2; i++)
{
temp = arr[i];
arr[i] = arr[n - 1 - i];
arr[n - 1 - i] = temp;
}
printf("\nAfter:\n");
for (i = 0; i < n; i++)
{
printf("%d\t", arr[i]);
}
}
