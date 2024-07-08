#include<stdio.h>
int main()
{
	int a=20 , *p ;
	p = &a		;
	printf("The address of p is %u\n",p);
	
	p++			;
	printf("The address of p is %u\n",p);
	
	p--			;
	printf("The address of p is %u\n",p);
	
	p = p + 2	;
	printf("The address of p is %u\n",p);
	
	p = p - 2	;
	printf("The address of p is %u\n",p);
	
	p = p - 2	;
	printf("The address of p is %u\n",p);
}