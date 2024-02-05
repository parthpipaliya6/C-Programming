#include<stdio.h>
#include<conio.h>

main ()
{
	int x,y;
	clrscr();
	printf("Enter value of  x :");
	scanf("%d",&x);
	printf("Enter value  of y :");
	scanf("%d",&y);

	printf("\nx\t: %d",x);
	printf("\ny\t: %d",y);

	printf("\n(x-y^2\t : %d",(x*x)-(2*x*y)+(y*y));

	getch();

}


