#include<stdio.h>
#include<conio.h>

main()
{
	int x=1,y,mul;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&y);

	while(x<=y)
	{
		mul *= x;
		x++;
	}
	printf("\nMultiplication of N numbers : %d",mul);
	getch();
}