#include<stdio.h>
int main()
{
	int i,n	;
	int *arr ;
	
	printf("Enter n :	");
	scanf("%d",&n);
	
	*arr = (int*)malloc(n * sizeof(int));
	
	printf("Size of the arr is %d\n",(n * sizeof(int)));
	
	printf("Enter array values : \n");
	for(i = 0 ;i<n;i++)
		scanf("%d",(arr+i));
		
	
	for(i = 0 ;i<n;i++)
		printf("%d	",*(arr+i));
}