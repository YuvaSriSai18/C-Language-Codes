#include<stdio.h>
void main()
{
    int  n,rem,sum=0;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        rem = n % 10;
        sum+=rem;
        if(sum>9)
           sum-=9;
        
        n/=10;
    }
    printf("%d",sum);
}