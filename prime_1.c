//CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT

#include<stdio.h>
void main()
{
    int n,i,count;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        printf("It is prime Number");
        else
        printf("It is not a prime number");
    }
}