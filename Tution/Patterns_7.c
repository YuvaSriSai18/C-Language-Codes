// C program to print the inverted right half pyramid of
// numbers
#include <stdio.h>

int main()
{
	int rows ;
	
	printf("Enter number of rows : ");
	scanf("%d",&rows);

	// first loop to print all rows
	for (int i = 0; i < rows; i++) {

		// first inner loop to print the numbers in each row
		for (int j = 0; j < rows - i; j++) {
			printf("%d ", j + 1);
		}
		printf("\n");
	}
}
