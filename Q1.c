//Write a C program to calculate the sum of 5 subject marks and. Also find and display the
// total and percentage. 
#include<stdio.h>
int main()
{
	int m,s,g,h,e,to,per;
	printf("Enter Your MATHS Marks : ");
	scanf("%d",&m);
	printf("\nEnter Your SCIENCE Marks : ");
	scanf("%d",&s);
	printf("\nEnter Your GUJARATI Marks : ");
	scanf("%d",&g);
	printf("\nEnter Your HINDI Marks : ");
	scanf("%d",&h);
	printf("\nEnter your ENGLISH Marks : ");
	scanf("%d",&e);
	to=m+s+h+g+e;
	printf("\nTOTAL MARKS : %d",to);
	per=to*100/500;
	printf("\nOVERALL PERCENTAGE : %d",per);
	percen=to/5;
	printf("\nAverage : %d",percen);
	return 0;
}
