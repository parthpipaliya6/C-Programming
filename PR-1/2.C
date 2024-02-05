#include<stdio.h>
#include<conio.h>

main ()
{
	float base_salary,hra,da,ta;

	clrscr();


	printf("Enter value of base_salary:");
	scanf("%f",&base_salary);

	hra+=(base_salary*10)/100;
	hra+=(base_salary*5)/100;
	hra+=(base_salary*8)/100;

	printf("\n HRA\t : %.2f",hra);
	printf("\n DA\t : %.2f",da);
	printf("\n TA\t : %.2f",ta);
	printf("\n TOTAL\t : %.2f",base_salary+hra+da+ta);

	getch();

}