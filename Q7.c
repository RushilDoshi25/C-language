/*
Write a program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using 
switch...case.
*/

#include <stdio.h>
void main()
{
int x, y, ans;
char ch;
printf("Enter an operator(+,-,/,*):\n");
scanf("%c", &ch);
printf("Enter two numbers:\n");
scanf("%d %d", &x, &y);
switch (ch)
{
case '+':
ans = x + y;
printf("The Addition is: %d", ans);
break;
case '-':
ans = x - y;
printf("The Subtraction is: %d", ans);
break;
case '/':
ans = x / y;
printf("The Division is: %d", ans);
break;
case '*':
ans = x * y;
printf("The Multiplication is: %d", ans);
break;
default:
printf("Invalid operator");
break;
}
}
