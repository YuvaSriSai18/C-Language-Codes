// Count the number of digit present int the given number

//USING STRINGS

#include<stdio.h>
#include<string.h>
void main()
{
    int l;
    char str[100];
    printf("Enter number :");
    gets(str);
    l=strlen(str);
    printf("%d",l);
}