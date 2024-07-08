//input three angles of a trianle and check wheter they form triangle or not

#include<stdio.h>
int main()
{
	 
	float A,B,C;
	float X;
	printf("Enter three angles : ");
	scanf("%f%f%f",&A,&B,&C);
	printf("%f%f%f\n",A,B,C);
	X=A+B+C;
	printf("%f\n",X);
	
	if(X==180)
	{
		printf("Therefore,These angles form a Triangle");
	}
	else
	{
		printf("Therefore,These angles don't form a triangle");
	}
	
	
}