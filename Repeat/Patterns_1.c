// C program to print right half pyramid pattern of number
#include <stdio.h>

int main()
{
	int rows;
	
	printf("Enter number of rows : ");
	scanf("%d",&rows);

	// first loop for printing rows
	for (int i = 1; i <= rows; i++) 
	{

		// second loop for printing number in each rows
		for (int j = 1; j <= i; j++) 
		{
			//printf("%3d", j);
			printf("*	");
		}
		printf("\n");
	}
	return 0;
}
