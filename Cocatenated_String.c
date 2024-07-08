#include <stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100],str[100];
    
    printf("Enter String_1 : ");
    gets(str1);
    
    printf("Enter String_2 : ");
    gets(str2);
    
    strcpy(str,strcat(str1,str2));
    
    printf("Concatenated String : %s",str);
}