#include<stdio.h>
#include<string.h>

struct student {
	int id;
	char name[20];
	float per;
};

void main ()
{
	FILE *fp;
	fp = fopen("deta.txt","w");
	
	int n;
	printf("Enter for student :");
	scanf("%d",&n);
	
	 struct student s1[n]; 
	 int i ;
	 for (i=0;i<n;i++)
	 {
	 	printf("Student id :");
	 	scanf ("%d",&s1[i].id);
	 	fflush(stdin);
	 	printf("Student name  :");
	 	scanf ("%[^\n]",&s1[i].id);
		printf("Student per :");
	 	scanf ("%f",&s1[i].id);
	 }
	 
	printf("\n\n--:OUTPUT:--\n\n");
	
	for(i=0;i < n; i++)
	{
		if(fp==NULL)
		printf("file is note avelebal...");
	}
	else 
	{
		printf("file open in succsesfully...");
	}
	fclose(fp);

}
