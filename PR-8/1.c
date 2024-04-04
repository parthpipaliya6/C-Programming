#include<stdio.h>

void main()
{
	int strlen=0,i;
	int *ptr;
	char class_name[50];
	ptr = &strlen;
	
	printf("Enter Any string : ");
	gets(class_name);
	
	for(i=0;class_name[i]!='\0';i++)
	{
		strlen++;
	}
	
	printf("Length Of String : %d",*ptr);

}