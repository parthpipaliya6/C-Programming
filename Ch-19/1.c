#include<stdio.h>

void main()
{
	int size,i;
	printf("Enter Size Of Array : ");
	scanf("%d",&size);
	int x[size];
	int *ptr[size];
	
	printf("-- Array Input --\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter X[%d] : ",i);
		scanf("%d",&x[i]);
		ptr[i] = &x[i];
	}	
	
	for(i=0;i<size;i++)
	{
		*ptr[i] *= *ptr[i];
	}
	
	printf("-- Square Of Array --\n");
	for(i=0;i<size;i++)
	{
		printf("x[%d] : %d\n",i,*ptr[i]);
	}
}