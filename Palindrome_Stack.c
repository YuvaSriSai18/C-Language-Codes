#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

typedef struct
{
    char data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack* stack)
{
    stack->top = -1;
}

int isEmpty(Stack* stack)
{
    return stack->top == -1;
}

int isFull(Stack* stack)
{
    return stack->top == MAX_SIZE - 1;
}

void push(Stack* stack, char ch)
{
    if (isFull(stack)) 
    {
        printf("Stack Overflow\n");
        exit(1);
    }

    stack->data[++stack->top] = ch;
}

char pop(Stack* stack) 
{
    if (isEmpty(stack)) 
    {
        printf("Stack Underflow\n");
        exit(1);
    }

    return stack->data[stack->top--];
}

int isPalindrome(const char* str) 
{
    Stack stack;
    initialize(&stack);

    int len = strlen(str);
    char* newStr = (char*)malloc(len * sizeof(char));
    int i, j;

    for (i = 0; i < len; i++) 
    {
        char ch = tolower(str[i]);

        if (isalpha(ch))
        {
            push(&stack, ch);
            newStr[i] = ch;
        }
    }

    for (j = 0; j < len; j++)
    {
        if (isalpha(str[j])) 
        {
            char ch = pop(&stack);
            if (newStr[j] != ch) 
            {
                free(newStr);
                return 0; // Not a palindrome
            }
        }
    }

    free(newStr);
    return 1; // Palindrome
}

int main()
{
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline, if any

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
