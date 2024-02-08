#include<stdio.h>
#include<conio.h>

main ()
{
	int n,i;
	clrscr();
	printf("Enter any namber :");
	scanf("%d",&n);

	i = n%10;

	while (n > 9)
	{
		n = n/10;

	}

	printf("\nsum of fisrt and last digit : %d",n+i);
	getch();

}