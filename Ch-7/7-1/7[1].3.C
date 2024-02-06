#include<stdio.h>
#include<conio.h>

main ()
{
	char a;
	clrscr();

	printf("Enter value of a :");
	scanf("%c",&a);

	if (a=='a'|| a=='i'|| a=='e'|| a=='o'|| a=='u'||
	    a=='A'|| a=='I'|| a=='E'|| a=='O'|| a=='U')
	{
		printf ("%c is vowel  !! ",a );

	}
	else
	{
		printf ("%c is console  !! ",a );

	}
	getch();

}