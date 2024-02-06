#include<stdio.h>
#include<conio.h>
main()
{
	int A,B;
	clrscr();

	printf("Enter first namber:");
	scanf("%d",&A);

	printf("Enter second namber:");
	scanf("%d",&B);

	if (A>B)
	{
		printf("%d minimum!! ",B);

	}
	else if (A<B)
	{
		printf ("%d minimum!!",A);

	}

    //   else
      //	{
	//	printf (" both are equal!!");

       //	}
	getch();

}

