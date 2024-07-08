#include<stdio.h>
#include<string.h>

int reverse(char str[])
{
    
    int len = strlen(str);
    int start = 0;
    int end =len - 1 ;
    
    printf("Reversed String : ");
    for(int i=end ;i >= start ; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}
int main()
{
    char str[100];
    
    printf("Enter String : ");
    gets(str);
    
    reverse(str);
    
    return 0;
}