#include<stdio.h>

void main()
{
	FILE *fp;
	
	char msg[50];
	
	fp = fopen("C:\\parth.c\\parth-20240319T175941Z-001\\parth\\Ch -22\\index.txt","a");
	
	if(fp == NULL)
	{
		printf("file is not Availabel ");
	}
	else 
	{
		printf("file open sucessfully \n\n");
		while (fgets(msg,2,fp)!=NULL)
		{
			printf("%S",msg);
		}
		fprintf(fp,"hello c programming ");
		fclose(fp);
	}
}