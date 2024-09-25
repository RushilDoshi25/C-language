//Write a Program to Check Whether a Number is Palindrome or Not 

#include <stdio.h>
void main()
{
int n, og, rev=0, rem;
printf("Enter a number:\n");
scanf("%d", &n);
og = n;
while (n > 0)
{
n /= 10;
}
if (og == rev)
{
printf("The number is a Palindrome Number");
}
else
{
printf("The number is not a Palindrome Number");
}
}

