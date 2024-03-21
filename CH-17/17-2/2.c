#include<stdio.h>

int length (char a[]);

void main ()
{
	int len ;
	char a[20];
	printf ("Enter Any Word : ");
	gets (a);
	printf ("Lenght Of Word :%d ", length(a));
}

int length (char a[])
{
	return strlen(a);
}