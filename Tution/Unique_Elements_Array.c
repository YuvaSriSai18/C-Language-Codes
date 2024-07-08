#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,k=0,n,count;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(a[i] == a[j])
				{
					count++;
				}
			}
		}
		if(count == 0)
		{
			b[k] = a[i] ;
			k++ ;
		}
	}
	
	printf("Unique Elements are :	");
	for(i=0;i<k;i++)
	{
		printf("%d\t",b[i]);
	}
}