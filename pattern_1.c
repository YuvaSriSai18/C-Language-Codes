/*PATTERN--1
WRITE A C PROGRAM TO PRINT THE FOLLOWING PATTERN 

1		3		5
	2		4		
1		3		5

*/
#include <stdio.h>
int main() 
{
    int i, j;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
//PATTERN-->1
    printf("Pattern 1:\n");
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= n; j++) 
        {
            if (i % 2 == 0) 
            {
                if (j % 2 == 0)
                    printf("%d\t", j);
                else
                    printf("\t");
            } 
            else 
            {
                if (j % 2 == 0)
                    printf("\t\t");
                else
                    printf("%d", j);
            }
        }
        printf("\n");
    }
} 