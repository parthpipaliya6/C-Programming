#include<stdio.h>

main()
{
	char name [20];
	printf("Enter your Name :");
	scanf("%[^\n]",&name);
	
	int i, len =0;
	for (i=0;name[i]!='\0'; i++)
	{
		len++;
	}
	
	for (i=0; i<len ;i++)
	{
		if (name [i-1]==' '||i==0)
		{
			name [i] = name[i] - 32;
		}
		else if (name[i]>='A'  && name[i]<='Z')
		{
			name [i] = name[i] + 32;
		}
	
	}
	
	printf("\n\n Name \t : %s",name );
	
}