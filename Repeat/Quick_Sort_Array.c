#include <stdio.h>
#define SIZE 100

int n;

void quick(int a[], int low, int high)
{
    int m;
    if (low < high)
    {
        m = partition(a, low, high);
        quick(a, low, m - 1);
        quick(a, m + 1, high);
    }
}

int partition(int a[], int low, int high)
{
    int pivot, i, j;
    pivot = a[low];
    i = low;
    j = high;
    while (i <= j)
    {
        while (a[i] <= pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i < j)
            swap(a, &i, &j);
    }
    swap(a, &low, &j);
    return j;
}

void swap(int a[], int *i, int *j)
{
    int temp;
    temp = a[*i];
    a[*i] = a[*j];
    a[*j] = temp;
}


int main()
{
    int i;
    int a[SIZE];
    printf("\n Enter total numbers to sort: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter %d th number: ", i + 1);
        scanf("%d", &a[i]);
    }
    quick(a, 0, n - 1);
    printf("\n The sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
    return 0;
}

