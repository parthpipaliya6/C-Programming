#include<stdio.h>
#include<string.h>

main()
{
	char password[20];
	
	printf("enter your password : ");
	gets(password);
	
	int i,number=0,len,capital=0,small=0,special=0,a;
	
	for(i=0;password[i] != NULL ;i++)
		len++;
		
	for(i=0;password[i] != NULL ; i++)
	{
		if(password[i]>='A' && password[i]<='Z')
		{
			capital++;
		}
		else if(password[i]>='a' && password[i]<='z')
		{
			small++;
		}
		else if(password[i]>='0' && password[i]<='9')
		{
			number++;
		}
		else
		{
			special++;
		}
	}
	
	printf("%d %d %d %d\n\n ",capital,small,special,number);
	
	( (number>=1) && (capital>=1) && (small>=1) && (special>=1) && (len>=6) )
			?printf("your password is strong !! ")
			:printf("your password is not strong !! ");

}