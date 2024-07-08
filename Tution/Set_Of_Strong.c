#include<stdio.h>
int main()
{
	int temp,n,i,f,sum,j,Num,rem;
	
	printf("Enter value : ");
	scanf("%d",&Num);
	
	
	for(n=1;n<=Num;n++)
	{
		temp = n;
		sum=0;
		while(temp> 0)
		{
			f=1;
			rem = temp % 10 ;
			for(j=1;j<=rem;j++)
			{
				f = f * j ;
			}
			sum = sum + f ;
			temp = temp / 10 ;
		}
		if(sum == n)
		printf("%d\t",n);
	}
	return 0;
}
/* here we are making temp variable to zero instead of index n , As qwhen we use index n 
it becoming zero and it is terminationg the for loop */