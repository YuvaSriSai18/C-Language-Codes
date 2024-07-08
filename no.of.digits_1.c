// Count the number of digit present int the given number

//USING LOG FUNCTION


#include <stdio.h>
#include <math.h>
int main()
{
    int n,l;
    printf("Enter a number:");
    scanf("%d",&n);
    l = log10(n)+1;
    printf("The number of digits: %d",l);
    return 0;
}
