//Sum of Non-Lower Triangular Elements

#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    
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
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<=j)
            {
                sum+=a[i][j];
            }
            
        }
        
    }
    printf("Sum of Non-Lower Triangular Matrix = %d\n",sum);
}