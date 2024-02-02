#include<stdio.h>
#include<conio.h>

main ()
{
	char n;
	clrscr();
	printf("s for sunday");
	printf("\nm for monday");
	printf("\nt for tuesday");
	printf("\nw for wednesday");
	printf("\nt for thursday");
	printf("\nf for friday");
	printf("\ns for saturday");

	printf("\n\nin Enetr your choice :");
	scanf("%c",&n);

	switch(n)
	{
		case 's':
			printf("sunday");
			break;

		case 'm':
			printf("monday");
			break;

		case 'T':
			printf("tuesday");
			break;

		case 'w':
			printf("wednesday");
			break;

		case 't':
			printf("thursday");
			break;

		case 'f':
			printf("friday");
			break;

		case 'S':
			printf("saturday");
			break;
		default:
			printf("invelid choice");

	}



	getch();
}