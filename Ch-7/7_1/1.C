#include<stdio.h>
#include<conio.h>

main()
{
	int age;
	clrscr();

	printf("Enter your age: ");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("You can Vote Age\t: %d",age);
	}
	else
	{
		printf("You cannot Vote Age\t: %d",age);
	}

	getch();
}