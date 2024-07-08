// C program to print the inverted left half pyramid pattern
// of numbers
#include <stdio.h>

int main()
{
	int rows;
	
	printf("Enter number of rows : ");
	scanf("%d",&rows);

	// first loop for printing all rows
	for (int i = 0; i < rows; i++) {

		// first inner loop for printing white spaces
		for (int j = 0; j < 2 * i; j++) {
			printf(" ");
		}

		// second inner loop for printing numbers
		for (int k = 0; k < rows - i; k++) {
			printf("%d ", k + 1);
		}
		printf("\n");
	}

	return 0;
}
