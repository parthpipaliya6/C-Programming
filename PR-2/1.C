#include<stdio.h>
#include<conio.h>

main ()
{
	char n;
	clrscr();
	printf("Enter N :");
	scanf("%c",&n);

	if (n>0 && n <='a')
	{
		printf("n is a digit",n);
	}

	else if (n >='a' && n<='z')
	{
		printf("%c is an alphabet",n);
	}
	else if (n>='A' && n<='Z')
	{
		printf("%c is an alphabet",n);
	}
	else
	{
		printf("%c is a spicial character",n);
	}
	getch();
}