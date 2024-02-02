#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);

	printf("\nA\t: %d\nB\t: %d\n\n",a,b);

	printf("%d + %d = %d\\n\n",a,b,a+b);// A + B = A+B
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d %% %d = %d\n",a,b,a%b);

	getch();

}