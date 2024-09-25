/*
Write a program that will find whether number is positive or negative number using 
function.
*/

#include <stdio.h>
void pn(int a);
void main()
{
int a;
printf("Enter an integer: ");
scanf("%d", &a);
pn(a);
}
void pn(int a)
{
if (a > 0)
{
printf("\n%d is positive", a);
}
else if (a < 0)
{
printf("\n%d is negative", a);
}
else
{
printf("\n0 is neither positive nor negative");
}
}
