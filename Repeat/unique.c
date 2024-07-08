#include<stdio.h>
int main()
{
	int a[100],i,j,n,count;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
			if(i!=j)
				if(a[i] == a[j])
				{
				count++;
				break;
			}
				
	
		if(count == 0)
		
		printf("Unique element is %d\n",a[i]);
    }
}