#include<stdio.h>
#include<conio.h>

main ()
{
	int x,y;
	clrscr();
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);

	printf("%d:",(x*x)+(2*x*y)+(y*y));

	getch();

}


