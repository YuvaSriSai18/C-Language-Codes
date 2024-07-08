// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n,sum,r,c,t;
    printf("Enter n : ");
    scanf("%d",&n);
    
    t=n;
    c=floor(log10(n)+1);
    while(n!=0)
    {
        r=n%10;
        sum+=pow(r,c);
        n/=10;
    }
    if(sum == t)
      printf("It is Armstrong Number\n");
    else
      printf("It is not an Armstrong Number\n");
    return 0;
}