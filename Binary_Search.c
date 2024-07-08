#include<stdio.h>
void main()
{
    int i,arr[100],se,n,temp=0;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter element to search : ");
    scanf("%d",&se);
    
    if( se < arr[0] && se > arr[n-1])
    {
        printf(" %d is not found\n");
    }
    else if ( se < arr[n/2]) 
    {
        for(i=0;i<n/2;i++)
        {
            if( arr[i] == se )
            {
                temp =1 ;
            }
        }
    }
    else
    for(i=n/2;i<n;i++)
    {
        if( arr[i] == se )
            {
                temp =1 ;
            }
    }
    
    if( temp == 1 )
    {
        printf("%d is found at position %d\n",se,i);
    }
    else
    {
        printf("%d is not found\n",se);
    }
    
}