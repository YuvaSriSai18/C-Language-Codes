#include<stdio.h>
int main()
{
    int r,c,i,j;
    
    printf("Enter rows and coloumns : ");
    scanf("%d%d",&r,&c);
    
    int a[r][c];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<=j)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}