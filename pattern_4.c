/*
WRITE A C PROGRAM TO PRINT THE FOLLOWING PATTERN

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
     //Pattern-->4:
    printf("\n\n\n\nPattern 4:\n");
    for(i=1;i<=n;i++)
	{
        if (i%2==0)
        {
        	printf("%d\n", i);
		}
        else
		{
			printf("  %d\n",i);
		}
    }
}