#include<stdio.h>

void main()
{
	int x,y;
	int *p=&x,*q=&y;
	
	printf("Enter Value Of x : ");
	scanf("%d",&x);
	printf("Enter Value Of y : ");
	scanf("%d",&y);
	
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
	
	printf("\nX : %d\n",x);
	printf("Y : %d",y);
}