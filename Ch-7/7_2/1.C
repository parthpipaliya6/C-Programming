#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("%d is Max !!",a);
		}
		else
		{
			printf("%d is Max !!",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is Max !!",b);
		}
		else
		{
			printf("%d is Max !!",c);
		}

	}

	getch();
}