#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[20];
    float per;
};

int main() {
    FILE *fp;
    fp = fopen("deta.txt", "w");

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s1[n];
    int i;
   	if (fp !=NULL)
   	{
		for (i = 0; i < n; i++) 
		{
			printf("Student ID: ");
			scanf("%d", &s1[i].id);
			fflush(stdin);
			printf("Student name: ");
			scanf("%[^\n]", s1[i].name);
			printf("Student percentage: ");
			scanf("%f", &s1[i].per);
		}

			printf("\n-- OUTPUT --\n\n");
		for (i = 0; i < n; i++) 
		{
			printf("Student ID: %d\n", s1[i].id);
			printf("Student name: %s\n", s1[i].name);
			printf("Student percentage: %.2f\n\n", s1[i].per);
		}
	}
 
}
