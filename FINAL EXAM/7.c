// 1
// 4  4
// 9  9  9 
// 16 16 16 16 
// 25 25 25 25 25
#include <stdio.h>

int main() 
{
    int i=1,j,r,n=1;
    for (i = 1; i <= 5; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", i*i);
            n++;
        }
        printf("\n");
    }
}

