#include<stdio.h>
#include<conio.h>

main ()
{
	int n;
	clrscr();

	printf("Enetr N :");
	scanf("%d",&n);


	(n % 2 == 0)
		?("%d is an evan namber !!",n)
		:("%d is an odd namber !!",n);
	getch();
}