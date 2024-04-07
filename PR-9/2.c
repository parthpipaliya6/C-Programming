#include <stdio.h>
#include <string.h>


struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() 
{
	int n;
	printf("Enter for student :");
	scanf("%d",&n);
	printf("\n\n");
	
    struct Student students[n];
	
	for (int i = 0; i < n; i++) 
	{
        printf("\tEnter details of Student :%d\n\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        fflush(stdin);
        printf("Name => ");
        scanf("%[^\n]", students[i].name);
        fflush(stdin);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        fflush(stdin);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        fflush(stdin);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
    }

    printf("\n\t--:Output:--\n\n");
    for (int i = 0; i < n; i++) 
	{
        int total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (total_marks / 300.0) * 100;

        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total_marks);
        printf("Percent => %.2f%%\n\n", percentage);
    }
}
