#include<stdio.h>

struct student {
	int stu_id;
	char stu_name[50];
	int std_age;
	char stu_course[50];
	char stu_city[50];
	int stu_standaer;
	char stu_school[50]; 
};

int main()
{
	int n;
	
	printf("Enter the number of Studant :");
	scanf("%d",&n);
	printf("\n\n");
	struct student s1[n];
	

    for (int i = 0; i < n; i++)
	{
        printf("\n\nEnter details for student %d \n\n", i+1);
        printf("\t --:Student Information:--\n\n");
        printf("Student ID: ");
        scanf("%d", &s1[i].stu_id);
        fflush(stdin);
        printf("Name: ");
        scanf("%[^\n]", s1[i].stu_name);
        fflush(stdin);
        printf("Age: ");
        scanf("%d",&s1[i].std_age );
        fflush(stdin);
        printf("Course: ");
        scanf("%[^\n]", &s1[i].stu_course);
        fflush(stdin);
        printf("City: ");
        scanf("%[^\n]", s1[i].stu_city);
        fflush(stdin);
        printf("Standard: ");
        scanf("%d",&s1[i].stu_standaer);
        fflush(stdin);
        printf("School: ");
        scanf("%[^\n]", s1[i].stu_school);
    }

    printf("\n\n\t--:Student Out put:--\n\n");
    
    for (int i = 0; i < n; i++) {
        printf("Student : %d\n", i+1);
        printf("ID \t: %d\n", s1[i].stu_id);
        printf("Name \t: %s\n", s1[i].stu_name);
        printf("Age \t: %d\n", s1[i].std_age);
        printf("Course \t: %s\n", s1[i].stu_course);
        printf("City \t: %s\n", s1[i].stu_city);
        printf("Standard: %d\n", s1[i].stu_standaer);
        printf("School \t: %s\n", s1[i].stu_school);
        printf("\n");
    }

}
	
