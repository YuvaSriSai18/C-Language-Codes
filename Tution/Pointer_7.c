#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6};
	int i , *p ;
	
	p = arr	;  //Here arr will refers to the &arr[0] becoz p is a pointer
	
	//  p = p + i   base address + i * sizeof(datatype)
	
	p++		;
	printf("%d\t",*p);
	
	p = p + 2		;
	printf("%d\t",*p);			
	
	p = p - 1		;
	printf("%d\t",*p);	
	
	p--		;
	printf("%d\t",*p);
	
	
	printf("%d\t",*(p));
	
}