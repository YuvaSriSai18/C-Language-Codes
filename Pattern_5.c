/*


1
2 3
4 5 6
7 8 9 10

*/
#include <stdio.h>

int main() 
{
    int i,j,n,k;
    k=1;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}