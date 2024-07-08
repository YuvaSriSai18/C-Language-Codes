#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack* stack) {
    stack->top = -1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        exit(1);
    }

    stack->data[++stack->top] = value;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(1);
    }

    return stack->data[stack->top--];
}

int areStacksIdentical(Stack* stack1, Stack* stack2) {
    if (stack1->top != stack2->top) {
        return 0; // Stacks have different sizes
    }

    int tempStack1[MAX_SIZE];
    int tempStack2[MAX_SIZE];
    int tempTop1 = stack1->top;
    int tempTop2 = stack2->top;
    int i;

    // Create temporary copies of the stacks
    for (i = 0; i <= tempTop1; i++) {
        tempStack1[i] = pop(stack1);
    }

    for (i = 0; i <= tempTop2; i++) {
        tempStack2[i] = pop(stack2);
    }

    // Compare the temporary stacks
    for (i = 0; i <= tempTop1; i++) {
        if (tempStack1[i] != tempStack2[i]) {
            // Restore the original stacks
            while (stack1->top < tempTop1) {
                push(stack1, tempStack1[stack1->top + 1]);
            }

            while (stack2->top < tempTop2) {
                push(stack2, tempStack2[stack2->top + 1]);
            }

            return 0; // Stacks are not identical
        }
    }

    // Restore the original stacks
    while (stack1->top < tempTop1) {
        push(stack1, tempStack1[stack1->top + 1]);
    }

    while (stack2->top < tempTop2) {
        push(stack2, tempStack2[stack2->top + 1]);
    }

    return 1; // Stacks are identical
}

int main() {
    Stack stack1, stack2;
    initialize(&stack1);
    initialize(&stack2);

    int size, value, i;

    printf("Enter the size of the stacks: ");
    scanf("%d", &size);

    printf("Enter the elements of stack 1: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &value);
        push(&stack1, value);
    }

    printf("Enter the elements of stack 2: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &value);
        push(&stack2, value);
    }

    if (areStacksIdentical(&stack1, &stack2)) {
        printf("The stacks are identical.\n");
    } else {
        printf("The stacks are not identical.\n");
    }

    return 0;
}
