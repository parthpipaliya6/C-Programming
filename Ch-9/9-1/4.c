#include<stdio.h>
#include<conio.h>

main()
{
	int x;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&x);

	while(x>=1)
	{
		if(x%2==1)
		{
			printf("%d\t",x);
		}
		x--;
	}
	getch();
}