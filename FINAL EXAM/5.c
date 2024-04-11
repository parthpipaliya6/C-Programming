#include<stdio.h>
#include<string.h>

struct car{
	char model[50];
	int year;
	int price;
};

int main()
{
	int n;
	printf("Enter you car :");
	scanf("%d",&n);
	printf("\n\n");
	
	struct car c1[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("CAR MODAL :");
		scanf("%[^\n]",c1[i].model);
		fflush(stdin);
		printf("CAR YEAR :");
		scanf("%d",&c1[i].year);
		fflush(stdin);
		printf("CAR PRICE :");
		scanf("%d",&c1[i].price);
			
	}
	printf("\n\n--:OUTPUT:--\n\n");
	for(i=0;i < n; i++)
	{
		printf("car no :",i+1);
		printf("\n");
		printf(" MODAL :%s\t\n",c1[i].model);
		printf(" PRICE :%d\t\n",c1[i].price);
		printf(" YEAR  :%d\t\n",c1[i].year);
		printf("\n\n");
	}
	
	
}
