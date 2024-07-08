#include<stdio.h>
#include<time.h>
int search(int n , int arr[] , int se )
{
    int i,temp=0;

    if( se < arr[0] && se > arr[n-1])
    {
        printf("%d is not found\n",se);
    }
    else if(se < arr[(n-1)/2])
    {
        for(i=0;i<((n-1)/2);i++)
        {
            if( se == arr[i])
            {
                temp = 1;
                printf("%d is found at %d position\n",se,i);
            }
        }
        if(temp == 0)
        {
            printf("%d is not found\n",se);
        }
    }
    else 
    {
        for(i=((n-1)/2) ; i<n ; i++)
        {
            if( se == arr[i] )
            {
                temp = 1;
                printf("%d is found at %d position\n",se,i);
            }
        }
        if(temp == 0 )
        {
            printf("%d is not found\n",se);
        }
    }
    
}
int main()
{
    int i,n,arr[100],se,temp;
    float time1 = clock();
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter element to search : ");
    scanf("%d",&se);
    
    search( n , arr , se );
    
    float time2 = clock();
    float time_taken = ( time2 - time1 ) / CLOCKS_PER_SEC;
    printf("Execution time = %lf\n",time_taken);
    
    return 0;
}