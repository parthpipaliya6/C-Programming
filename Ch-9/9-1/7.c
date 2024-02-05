#include<stdio.h>
#include<conio.h>

main()
{
	int x=1,y,sum=0;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&y);

	while(x<=y)
	{
		sum += x;
		x++;
	}
	printf("\nSum of N numbers : %d",sum);
	getch();
}