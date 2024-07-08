#include<stdio.h>
int search(int arr[] , int F , int  L , int se)
{
    if(F <= L)
    {
        int M = ((L + F) /2);
        if(arr[M] == se)
        {
            return M;
        }
        else if(arr[M] < se)
        {
            return search(arr , M+1 , L , se);
        }
        else 
        {
            return search(arr , F , M-1 , se);
        }
    }
    return -1;
}
int main()
{
    int n,i,arr[100],se;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter element to search : ");
    scanf("%d",&se);
    
    int temp = search(arr , 0 , n-1 , se);
    
    if(temp == -1)
    {
        printf("%d is not found\n",se);
    }
    else
    {
        printf("%d is found at %d position\n",se,temp);
    }
}