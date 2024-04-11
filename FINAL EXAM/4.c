#include<stdio.h>

void main ()
{
	int i,size;
	printf("Enter size of arrya :");
	scanf("%d",&size);
	int x[size];
	int *ptr[size];
	
	printf("--:array input --:\n");
	for (i=0;i<size;i++)
	{
		printf("Enter x[%d] :",i);
		scanf ("%d",&x[i]);
		ptr[i]= &x[i];
	}
	for (i=0;i<=size;i++)
	{
		*ptr[i] *= *ptr[i];
		
	}
	
	printf("--square of Array --\n");
	for (i=0;i<size;i++)
	{
		printf("x[%d] : %d\n",i,*ptr[i]);
	}
}
