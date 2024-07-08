#include<stdio.h>
void main()
{
    int  n,i,sum=0;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum=sum+i;
        }
    }
    if(sum == n)
    {
        printf("It is perfect nmber ");
    }
    else
    {
        printf("It is not a perfect number ");
    }
    
}