//double pointers

#include<stdio.h>
int main()
{
	int a = 234 ;
	
	int *p , **q ;
	
	p = &a ;
	printf("The address of a is %u\n",p);
	q = &p ;
	printf("The address of p is %u\n",q);
	printf("The address of a is %u\n",*q);
	printf("%d",**q);
	
}