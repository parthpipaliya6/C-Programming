#include<stdio.h>

void chack (int a);

void main()
{
	int a;
	
	printf("Enter your Namber :");
	scanf("%d",&a);
	chack (a);	
	
}

void chack (int a)
{
	(a%3==0  &&  a%5==0)
		?printf("\n %d is Divisible by both 3 & 5 ",a)
		:printf("\n %d is  not Divisible by both 3 & 5 ",a);
	
}