/*
 Create a program to give Net Salary to employee. 
Read basic salary from the user, 
i. If Salary >= 25000 then HRA:15%, DA: 25% 
ii. If Salary >=20000 and salary < 25000 then HRA:10%, DA: 15% 
iii. If Salary>=10000 and salary < 20000 then HRA: 8%, DA:12% 
iv. If Salary<10000 then HRA: 5%, DA:10% 
To calculate the Net Salary, formula is: 
Net Salary=Basic salary + HRA + DA
*/

#include<stdio.h>
int main()
{
 float bs,da,hra,ns;
 printf("Enter the Basic Salary:\n");
 scanf("%f",&bs);
 if (bs>=25000)
 {
 hra= bs*0.15;
 da= bs*0.25; 
 } 
 else if(bs>=20000 && bs<25000)
 {
 hra= bs*0.10;
 da= bs*0.15; 
 }
 else if (bs>=10000 && bs<20000)
 {
 hra= bs*0.8; 
 da= bs*0.12;
 }
 else
 {
 hra= bs*0.5;
 da= bs*0.10;
 }
 ns=bs+hra+da;
 printf("Net Salary of this Employee is:%.2f\n",ns); 
 return 0;
}

