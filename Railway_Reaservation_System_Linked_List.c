#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int tokenNumber;
    int gender; // 0 for female, 1 for male, 2 for other
    struct Node* next;
} Node;

typedef struct
{
    Node* front;
    Node* rear;
} Queue;

void initializeQueue(Queue* q)
{
    q->front = NULL;
    q->rear = NULL;
}

int isQueueEmpty(Queue* q)
{
    return (q->front == NULL);
}

void enqueue(Queue* q, int tokenNumber, int gender)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->tokenNumber = tokenNumber;
    newNode->gender = gender;
    newNode->next = NULL;

    if (isQueueEmpty(q))
    {
        q->front = newNode;
        q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

void dequeue(Queue* q)
{
    if (isQueueEmpty(q))
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }

    Node* temp = q->front;
    q->front = q->front->next;
    free(temp);

    if (q->front == NULL)
        q->rear = NULL;
}

void displayQueue(Queue* q)
{
    if (isQueueEmpty(q))
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");

    Node* current = q->front;
    while (current != NULL)
    {
        printf("%d ", current->tokenNumber);
        current = current->next;
    }

    printf("\n");
}

void displaySystem(Queue* femaleQueue, Queue* maleQueue, Queue* otherQueue)
{
    printf("System Status:\n");
    printf("---------------\n");
    printf("Female Queue: ");
    displayQueue(femaleQueue);
    printf("Male Queue: ");
    displayQueue(maleQueue);
    printf("Other Queue: ");
    displayQueue(otherQueue);
    printf("\n");
}

int main()
{
    Queue femaleQueue, maleQueue, otherQueue;
    initializeQueue(&femaleQueue);
    initializeQueue(&maleQueue);
    initializeQueue(&otherQueue);

    int tokenNumber = 1;
    int choice;

    do
    {
        printf("Press 1 for Female, 2 for Male, 3 for Other, or 0 to exit: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue(&femaleQueue, tokenNumber, 0);
            break;
        case 2:
            enqueue(&maleQueue, tokenNumber, 1);
            break;
        case 3:
            enqueue(&otherQueue, tokenNumber, 2);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
            continue;
        }

        printf("Token Number: %d\n", tokenNumber);
        displaySystem(&femaleQueue, &maleQueue, &otherQueue);

        tokenNumber++;
    } while (choice != 0);

    // Deallocate memory for the queues
    while (!isQueueEmpty(&femaleQueue))
        dequeue(&femaleQueue);
    while (!isQueueEmpty(&maleQueue))
        dequeue(&maleQueue);
    while (!isQueueEmpty(&otherQueue))
        dequeue(&otherQueue);

    return 0;
}
