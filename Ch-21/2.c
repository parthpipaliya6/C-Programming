#include <stdio.h>
#include <string.h>


struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() {
    int num_employees;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);
    
    struct Employee e1[num_employees];

    for (int i = 0; i < num_employees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
         printf("\t --:Employees Information:--\n\n");
        printf("Employee ID: ");
        scanf("%d", &e1[i].emp_id);
        fflush(stdin);
        printf("Name: ");
        scanf("%s", e1[i].emp_name);
        fflush(stdin);
        printf("Age: ");
        scanf("%d", &e1[i].emp_age);
        fflush(stdin);
        printf("Role: ");
        scanf("%s", e1[i].emp_role);
        fflush(stdin);
        printf("City: ");
        scanf("%s", e1[i].emp_city);
        fflush(stdin);
        printf("Experience (in years): ");
        scanf("%d", &e1[i].emp_experience);
        fflush(stdin);
        printf("Company Name: ");
        scanf("%s", e1[i].emp_company_name);
    }

     printf("\n\n\t--:Emplotees Out put:--\n\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Employee ID: %d\n", e1[i].emp_id);
        printf("Name: %s\n", e1[i].emp_name);
        printf("Age: %d\n", e1[i].emp_age);
        printf("Role: %s\n", e1[i].emp_role);
        printf("City: %s\n", e1[i].emp_city);
        printf("Experience: %d years\n", e1[i].emp_experience);
        printf("Company Name: %s\n", e1[i].emp_company_name);
        printf("\n");
    }

   
}
