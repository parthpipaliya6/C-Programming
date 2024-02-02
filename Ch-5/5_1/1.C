#include<stdio.h>
#include<conio.h>

/*
	1) Unary Operator :

		* Increment (++) :
			Post Increment:

				syntax :  Oprand++;

			Pre Increment :

				syntax : ++Oprand;

		* Decrement (--) :
			Post Decrement :

				syntax : Oprand--;

			Pre Decrement :

				syntax : --Oprand;

*/

main()
{
	int a = 10;
	clrscr();

	printf("A\t: %d\n",a);
	// ++10 = 11
	printf("A\t: %d\n",--a);// ++a : ++10 // 1 + 10 = 11
	printf("A\t: %d\n",a);

	getch();
x}