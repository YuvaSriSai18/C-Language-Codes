//POINTERS 
#include<stdio.h>
int main()
{
    int a ,*p;
    p=&a ;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",p);
    printf("The Value at address of a is %p is %d",p,*p);
}