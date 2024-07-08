// C program to print the full pyramid pattern of numbers
#include <stdio.h>

int main()
{
	int rows ;
	
	printf("Enter number of rows : ");
	scanf("%d",&rows);

	// first loop to print all rows
	for (int i = 0; i < rows; i++) {

		// inner loop 1 to print white spaces
		for (int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}

		// inner loop 2 to print star numbers
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%d ", k + 1);
		}
		printf("\n");
	}
	return 0;
}
