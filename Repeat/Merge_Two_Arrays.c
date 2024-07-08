//WAP to merge two arrays

#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,j,s1,s2,s3;
	
	printf("Enter number of elements in Arr_1 :	");
	scanf("%d",&s1);
	
	for(i=0;i<s1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter number of elements in Arr_2 :	");
	scanf("%d",&s2);
	
	for(i=0;i<s2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	s3 = s1 + s2 ;
	
	for(i=0;i<s1;i++)
	{
		c[i] = a[i] ;
	}
	for(j=0;j<s2;j++)
	{
		c[i] = b[j] ;
		i++;
	}
	
	printf("Merged Array :	");
	for(i=0;i<s3;i++)
	{
		printf("%d\t",c[i]);
	}
	
}