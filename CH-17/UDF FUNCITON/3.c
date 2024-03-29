#include<stdio.h>

void lepyear(int start,int end );

main()
{
	int a,b;
	printf("Enter first Year :");
	scanf("%d",&a);
	printf("Enter second Year :");
	scanf("%d",&b);
	
	printf("Leap year \t:");
	lepyear(a,b);
	 		
}

void lepyear(int start,int end )
{
	if (start <= end )
	{
		if (start %4 == 0)
		{
			printf("%d \t",start);
		}
		start++;
		lepyear(start,end );
	}
}