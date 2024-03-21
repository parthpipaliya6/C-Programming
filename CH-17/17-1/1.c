#include<stdio.h>

void cube (int a);

void main()
{
	int a;
	
	printf("Enter your Namber :");
	scanf("%d",&a);
	cube (a);	
	
}

void cube (int a)
{
	printf("\n cube of  %d :%d ",a,a*a*a);
}