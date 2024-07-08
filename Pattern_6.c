/*
         1
        21
       321
      4321

*/
#include<stdio.h>
void main()
{
    int n,i,j;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            (i>=j) ? printf("%d ",j) : printf("  ") ;
        }
        printf("\n");
    }
}