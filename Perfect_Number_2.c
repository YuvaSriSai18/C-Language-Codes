#include<stdio.h>
#include<math.h>
void main()
{
    int  n,i,q,sum=1;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    q = (int) (sqrt(n));
    for(i=2;i<=q;i++)
    {
        if(n%i == 0 && i!=n/i)
        {
            sum=sum+i+n/i;
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