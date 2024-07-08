#include<stdio.h>
int main()
{
	int i,n;
	int *arr ;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	*arr = (int*)calloc(n,sizeof(int));
	
	printf("The size of arr is %d\n",(n*sizeof(int)));
	
	printf("Enter Array Values : \n");
	for(i=0;i<n;i++)
		scanf("%d",(arr+i));
	
	printf("\n");
	
	for(i=0;i<n;i++)
		printf("%d	",*(arr+i));
		
	free(arr) ;
	
		
}