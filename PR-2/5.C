#include<stdio.h>
#include<conio.h>

main()
{
	float Unit,Bile,Totalbil;
	clrscr();

	printf("Enter your electricity Unit : ");
	scanf("%f",&Unit);

	if(Unit <= 50)
	{
		B = Unit*0.50 ;
	}
	else if(Unit>=51 && Unit<=150)
	{
		B = ((Unit-50)*0.75) +25 +((Unit-50)*0.75*0.2) ;
	}
	else if(Unit>=151 && Unit<=250)
	{
		B = ((Unit-150)*1.20) +(75+25)+((Unit-150)*1.20*0.2);
	}
	else if(Unit>=251)
	{
		B = ((Unit-250)*1.50) +(120+75+25)+((Unit-150)*1.50*0.2);
	}
	else
	{
		printf("Invalid input !!");
	}

	T = B;

	printf("Your Total bill : %.2f Rupees",T);

	getch();
}
