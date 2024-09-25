/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, 
Mathematics and Computer. Calculate percentage and grade according to following:
 Percentage >= 90% : Grade A
 Percentage >= 80% : Grade B
 Percentage >= 70% : Grade C
 Percentage >= 60% : Grade D
 Percentage >= 40% : Grade E
 Percentage < 40% : Grade F
*/
#include<stdio.h>
int main()
{
 float per,p,c,b,m,cp;
 printf("Enter the marks of the 5 subjects:\n");
 scanf("%f%f%f%f%f",&p,&c,&b,&m,&cp);
 per=((p+c+b+m+cp)/500)*100;
 printf("Your percentage is %.2f\n",per);
 if (per>=90)
 {
 printf("Your grade is A");
 }
 else if (per>=80)
 {
 printf("Your grade is B");
 }
 else if (per>=70)
 {
 printf("Your grade is C");
 }
 else if (per>=60)
 {
 printf("Your grade is D");
 }
 else if(per>=40)
 {
 printf("Your grade is E");
 }
 else
 {
 printf("Your grade is F");
 }
 return 0;
}

