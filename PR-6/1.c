#include<stdio.h>

main ()
{
	char name [20];
	char rev [20];
	int i,len,l,c=1;
	printf("Enter your name : ");
	scanf("%[^\n]", &name );
	
	for(i=0; name [i]!='\0';i++)
	{
			len ++;
	}
	l = len;
	len--;
	
	for (i=0;i<l;i++,len--)
	{
			rev [len ] = name [i];
			
	}
	
	int pal =1;
	for (i=0;name [i]!='\0';i++)
	{
			if (name [i]==rev[i])
			{
				pal = 0; 
			}
			 
			else 
			{
				break;
			}	
	}
	(pal == 0 )
		?printf("Name is palindrome")
		:printf("Name is Not palindrome");
	
	
	
}