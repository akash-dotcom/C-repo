#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = 0;
struct Node *rear = 0;

void enqueue(int x)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void display()
{
    struct Node *temp;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void dequeue()
{
    struct Node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Empty\n");
    }
    else
    {
        printf("Dequeued element is %d\n", front->data);
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Empty\n");
    }
    else
    {
        printf("%d", front->data);
    }
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(7);
    display();
    dequeue();
    display();
}