/*
Write a program to swap two numbers using functions with return-type and with 
arguments. 
*/

#include <stdio.h>
int swap(int a, int b);
void main()
{
int x, y, temp;
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
printf("\nBefore swapping: A = %d and B = %d", x, y);
swap(x, y);
}
int swap(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("\nAfter swapping: A = %d and B = %d", a, b);
return 0;
}
