#include<stdio.h>
#include<conio.h>

main()
{
	int a = 57;
	clrscr();

	printf("%d %d %d %d %d",--a,++a,--a,a++,++a);
	//56,57,56,56,58

	getch();
}