#include<stdio.h>
#include<conio.h>

main()
{
	int a=100,b=20;
	float pi = 3.14;
	char ch = 'J';
	clrscr();
	// datatype variableName;

	printf("|-----------|\n");
	printf("|A\t: %i|\n",a);
	printf("|B\t: %d|\n",b);
	printf("|-----------|\n");

	a = 10;

	printf("A: %d\nB: %d\n\n",a,b);

	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n\n\n",a,b,a/b);

	printf("PI\t: %.2f\n",pi);
	printf("Char\t: %c",ch);

	getch();
}