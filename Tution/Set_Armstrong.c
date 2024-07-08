#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,rem,sum,d,k;
	
	printf("Enter n value : ");
	scanf("%d",&n);
	
	for(k=1;k<=n;k++)
	{
		sum=0;
		d=0;
		temp=k;
		while(k>0)
		{
			k=k/10;
			d++;
		}
		k=temp;
		while(temp>0)
		{
			rem = temp % 10 ;
			sum = sum + pow(rem ,d);
			temp = temp / 10;
		}
		if(sum == k)
		printf("%d\t",k);
	}
}