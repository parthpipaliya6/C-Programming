#include<stdio.h>
#include<conio.h>

main()
{
	int n,count;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);

	while(n != 0 )
	{
		count++;
		n /= 10;

	}

	printf("\nTotaldigit : %d",count);
	getch();

}