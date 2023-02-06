#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int data;
    struct Queue *next;
};

struct Queue *head = NULL;

void enQueue(int n)
{
    struct Queue *last = head;
    struct Queue *new_node =  (struct Queue*)malloc(sizeof(struct Queue));
    new_node->data = n;
    new_node->next = NULL;
    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
    }
}

void deQueue()
{
    struct Queue *ptr;
    if(head == NULL)
    {
        printf("Queue is Empty !");
    }
    else
    {
        ptr = head;
        printf("Value Deleted : %d ",ptr->data);
        head = head->next;
        free(ptr);
    }
}

void display()
{
    struct Queue *node = head;
    printf("Queue Created : ");
    while(node != NULL)
    {
        printf(" %d ",node->data);
        node = node->next;
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n\nEnter 1 to enQueue\nEnter 2 to deQueue\nEnter 3 to display\nEnter 4 to Exit\n");
        printf("\nEnter your Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        {
            int n;
            printf("Enter the data : ");
            scanf("%d",&n);
            enQueue(n);
            break;
        }
        case 2 :
        {
            deQueue();
            break;
        }
        case 3 : 
        {
            display();
            break;
        }
        case 4:
        {
            return;
        }
    }
}
}