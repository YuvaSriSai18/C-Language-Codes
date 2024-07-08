#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int b_search_recursive(int[], int, int, int);
void b_search_nonrecursive(int[], int, int);
void read_list(int[], int);
void print_list(int[], int);

int main()
{
    int a[100], num, x;
    int ch, pos;
    printf("\n[1] Binary Search using Recursion method");
    printf("\n[2] Binary Search using Non-Recursion method");
    printf("\n[3] Exit");
    while (true)
    {
        printf("\n\nEnter your Choice:");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\n**Recursive method**\n");
                
                printf("\nEnter the number of Elements: ");
                scanf("%d", &num);
                
                read_list(a, num);
                print_list(a, num);
                
                printf("\n\nEnter the Element you want to search:\n\n");
                scanf("%d", &x);
                
                pos = b_search_recursive(a, 0, num, x);
                if (pos == -1)
                    printf("Element is not found");
                else
                    printf("Element is found at %d position", pos + 1);
                break;

            case 2:
                printf("\n**Non-Recursive method**\n");
                printf("\nEnter the number of Elements: ");
                scanf("%d", &num);
                
                read_list(a, num);
                
                //printf("\nElements present in the list are:\n\n");
                print_list(a, num);
                
                printf("\n\nEnter the Element you want to search:\n\n");
                scanf("%d", &x);
                
                b_search_nonrecursive(a, num, x);
                break;

            case 3:
                exit(0);
                break;

            default:
                printf("Invalid choice. Please enter a valid option.");
        }
    }
    return 0;
}

/* Recursive function */
int b_search_recursive(int a[], int low, int high, int x)
{
    int mid, pos;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (x == a[mid])
            return mid;
        else if (x < a[mid])
            return b_search_recursive(a, low, mid - 1, x);
        else
            return b_search_recursive(a, mid + 1, high, x);
    }
    return -1;
}

/* Non-Recursive function */
void b_search_nonrecursive(int a[], int n, int x)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x == a[mid])
        {
            printf("\nThe Element %d is present at position %d in the list\n", x, mid + 1);
            return; // Exit the function after finding the element
        }
        else if (x > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("\nThe Element %d is not present in the list\n", x);
}

void read_list(int a[], int n)
{
    int i;
    printf("\nEnter the Elements :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    sort(a , n);
}

void print_list(int a[], int n)
{
    int i;
    printf("\nElements present in the list are:\t");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
}
int sort(int arr[] , int n)
{
    int i,j,temp;
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}

