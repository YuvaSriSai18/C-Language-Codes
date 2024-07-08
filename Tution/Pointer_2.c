//POINTERS 
#include<stdio.h>
int main()
{
    int a =23 ;
    float b=20.5;
    void *p;
    p = &a ;
    printf("The value at address of a is %u is %d\n",p,*(int*)p);
    p=&b ;
    printf("The Value at address of b is %u is %.2f",p,*(float*)p);
}