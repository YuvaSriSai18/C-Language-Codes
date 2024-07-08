/*


        5 
      4 5 
    3 4 5 
  2 3 4 5 
1 2 3 4 5

*/

#include<stdio.h>
void main()
{
    int i,j,k,n;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(k=i;k<=n;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}