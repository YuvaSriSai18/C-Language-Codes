#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6};
	int i , *p ;
	
	p = arr	;  //Here arr will refers to the &arr[0] becoz p is a pointer
	
	for( i =0 ; i < 6 ; i++)
		printf("%d\t",p[i]);
	
	printf("\n");
	for( i = 5 ; i >=0 ; i--)
		printf("%d\t",*(p+i));
	
}