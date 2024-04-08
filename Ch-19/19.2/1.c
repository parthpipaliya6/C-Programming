#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter Array Siae : ");
	scanf("%d",&n);
	int y[n];
	int *ptr1[n] ;
	int **ptr2[n];
	int x = n-1;
	
	printf("\n-- ARRAY INPUT --\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&y[i]);
		ptr1[i] = &y[i];
		ptr2[x-i] = &ptr1[i];
	}
	
	printf("\n-- REVERSE ARRAY --\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d\n",i,**ptr2[i]);
	}
}