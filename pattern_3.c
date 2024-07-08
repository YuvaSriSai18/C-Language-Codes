/*
WRITE A C PROGRAM TO PRINT THE FOLOWING PATTERN
     
	 5
    4
   3
  2
 1   

*/
#include <stdio.h>
int main() 
{
    int i, j;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    //PATTERN-->3
    printf("\n\n\n\nPattern 3:\n");
    for(i=n;i>=1;i--){
        for (j = 1; j <= i; j++) {
            if (i == j)
                printf("%d\n", j);
            else
                printf("  ");
        }
    }
}