//Set of Perfect Numbers

#include<stdio.h>
int main()
{
	long int Num,i,sum,j;
	
	printf("Enter Value : ");
	scanf("%d",&Num);
	
	for(i=1;i<=Num;i++) // Outer loop iterates for upto given number
	{
		sum = 0 ;
		for(j=1;j<=i/2;j++)  // OInner Loop iterates for factors of index i 
		{
			
			if(i % j == 0)
			{
				sum = sum + j ;
			}
		}
		if(sum == i)
		{
			printf("%d	",i);
		}
	}
}