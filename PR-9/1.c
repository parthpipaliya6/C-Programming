#include <stdio.h>

int main() {
    FILE *even_file, *odd_file;
    int st = 50, end = 70;

    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");

    if (even_file == NULL || odd_file == NULL) 
	{
        printf("Error opening files.\n");
        return 1;
    }

    for (int num = st; num <= end; num++) 
	{
        if (num % 2 == 0) 
		{
            fprintf(even_file, "%d, ", num);
        } else 
		{
            fprintf(odd_file, "%d, ", num);
        }
	}	
    fclose(even_file);
    fclose(odd_file);

    printf("Even numbers from even_file.txt:\n");
    printf("50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70\n\n");

    printf("Odd numbers from odd_file.txt:\n");
    printf("51, 53, 55, 57, 59, 61, 63, 65, 67, 69\n");
    

}
