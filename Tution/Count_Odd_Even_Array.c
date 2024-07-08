//WAP  TO SEPERATE ODD AND EVEN INTEGERS IN A AN ARRAY

#include<stdio.h>
int main()
{
	int i,j=0,k=0,n,arr[100],E[100],O[100];
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]%2 == 0)
		{
			E[j] = arr[i];
			j++;
		}
		else
		{
			O[k] = arr[i];
			k++;
		}
	}
	
	printf("Even Numbers :	");
	for(i=0;i<j;i++)
	{
		printf("%d\t",E[i]);
	}
	
	printf("\n");
	
	printf("Odd Numbers :	");
	for(i=0;i<k;i++)
	{
		printf("%d\t",O[i]);
	}
}