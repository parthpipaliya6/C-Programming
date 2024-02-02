#include<stdio.h>
#include<conio.h>

main()
{
	int a=101,b=201,c;
	clrscr();

	printf("A\t: %d\n",a);
	printf("B\t: %d\n",b);

       //	c = a; // c = 10
       //	a = b; // a = 20
       //	b = c; //  b = 10

       a = a + b; // 10 + 20 // a = 30;
       b = a - b; // 30 - 20 // b = 10;
       a = a - b; // 30 - 10 // a = 20

	printf("A\t: %d\n",a);
	printf("B\t: %d\n",b);

	getch();
}