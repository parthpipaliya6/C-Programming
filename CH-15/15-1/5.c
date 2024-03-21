#include<stdio.h>

main()
{
	char name[20];
	
	printf("enter your name : ");
	scanf("%[^\n]",&name);
	int i,j;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i] = name[i] + 32;
		}
		
		else if (name[i-1] == ' ')
		{
				
			if (name [i]>='a' && name [i] <='z')
			{
				name [i] = name [i] - 32;
			
			}
		}
	
		else if (name [i] == ' ')
		{			
			for (j=i;name [j]!='\0';j++)
			{
				name [j] = name [j + 1];
			}	
		}
			                      
 
	}printf("Name In Cemalcase : %s" ,name );
	
}