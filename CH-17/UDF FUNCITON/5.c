#include<stdio.h>

void Ascending(int size, int i, int a[],int j,int n);
void Descending(int size, int i, int a[],int j,int n);

void main()
{
	int size,i,j,n;
	printf("Enter arrya size :");
	scanf("%d",&size);
	int a[size];
	printf("\n\n ARRAY INPUT\n\n ");
	for (i=0;i<size ;i++)
	{
		printf("Enter a[%d] :",i);
		scanf("%d ",&a[i]);
	}
	printf("\n\n--ACSENDING ORDER--\n");
	Ascending(size,i,a,j,n);
	printf("\n\n--DESCENDING ORDER--\n");
	Descending(size,i,a,j,n);
	
	
}
void Ascending(int size, int i, int a[],int j,int n)
{
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size ;j++)
		{
			if (a[i]>a[j])
			{
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
	
	for (i=0;i<size;i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
}

void Descending(int size, int i, int a[],int j,int n)
{
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size ;j++)
		{
			if (a[i]<a[j])
			{
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
	
	for (i=0;i<size;i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
}