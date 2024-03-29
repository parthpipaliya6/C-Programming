#include<stdio.h>

void largenum(int i,int y,int a[],int size);

void main()
{
	int i,size,y;
	printf("Enter Array Size : ");
	scanf("%d",&size);
	int a[size];
	
	printf("\n\n--ARRAY INPUT--\n");
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	largenum(i,y,a,size);
}

void largenum(int i,int y,int a[],int size)
{
	y = a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>y)
		{
			y = a[i];
		}
	}
	
	printf("\nLargest Element : %d",y);
}