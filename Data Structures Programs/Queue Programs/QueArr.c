#include <stdio.h>
#define size 10

int queue[size];
int front = -1,rear = -1;

void enQueue(int x)
{
    if(front == size-1)
    printf("\n Queue Overflow!");
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void deQueue()
{
    if(front == rear)
        printf("\n Queue is Empty!");
    else
    {
        front++;
        printf("\n Value Deleted : %d ",queue[front]);
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
    }
}
void display()
{
    int i;
    if(front == rear)
    {
        printf("\n Queue is Empty !");
    }
    else
    {
        printf(" \n Queue Created : ");
        for(i = front+1;i<=rear;i++)
        {
            printf(" %d ",queue[i]);
        }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n\n Enter 1 to enQueue \n Enter 2 to deQueue \n Enter 3 to Display \n Enter 4 to Exit");
        printf("\n Enter your Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1 :
            {
                int a;
                printf("\n Enter the Data : ");
                scanf("%d",&a);
                
                enQueue(a);
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
            case 4 :
            {
                return;
            }

        }
    }
}