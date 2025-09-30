#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    unsigned long value;
    struct Node *next;
} Node;

Node *createNode(unsigned long val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}

int isFibo(Node *head, unsigned long n)
{
    Node *current = head;
    Node *last = NULL;

    // Check the cache for n
    while (current != NULL)
    {
        if (current->value == n)
            return 1;
        last = current;
        current = current->next;
    }

    Node *temp = head;
    
    // Traverse to second last element
    while (temp->next->next != NULL)
        temp = temp->next;

    unsigned long a = temp->value;
    unsigned long b = temp->next->value;

    while (b < n)
    {
        unsigned long nextFib = a + b;
        a = b;
        b = nextFib;

        last->next = createNode(b);
        last = last->next;
    }

    return (b == n);
}

int main()
{
    int T;
    scanf("%d", &T);

    unsigned long N;

    // Create cache of fib numbers
    Node *fibCache = createNode(0);
    fibCache->next = createNode(1);

    for (int i = 0; i < T; i++)
    {
        scanf("%lu", &N);

        if (isFibo(fibCache, N))
            printf("IsFibo\n");
        else
            printf("IsNotFibo\n");
    }

    // Free memory
    Node *current = fibCache;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
