#include<stdio.h>

main()
{
	int r,c,i,j;
	printf("Enter row :");
	scanf("%d",&r);
	printf("Enter column :");
	scanf("%d",&c);
	int a[r][c];
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int n=a[2][2];
	
//	for (i=0;i<r;i++)
//	{
//		for (j=0;j<c;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
	
	printf("\n largest element : %d",n);
	
}
