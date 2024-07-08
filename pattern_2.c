/*
WRITE A C PROGRAM TO PRINT THE FOLOWING PATTERN

1
 2
  3
   4
    5

*/
#include <stdio.h>
int main() 
{
    int i, j;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

//Pattern-->2:
    for(i=1;i<=n;i++)
    {
        for (j = 1; j<=i; j++) 
        {
            if (i == j)
                printf("%d\n", j);
                else
                printf("  ");
        }
    }    
        
}