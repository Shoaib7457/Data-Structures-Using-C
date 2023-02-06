#include <stdio.h>
#define size 10

int queue[size];
int front = 0,rear = 0;

void enQueue(int n)
{
    if((rear+1)%size == front)
    {
        printf("Queue is Full !");
        return;
    }
    queue[rear] = n;
    rear = (rear+1)%size;
}

void deQueue()
{
    if(rear == front)
    {
        printf("Queue is Empty !");
        return;
    }
    printf("Data Deleted : %d ",queue[front]);
    front = (front+1)%size;
}

void display()
{
    if(front == rear)
    {
        printf("Queue is Empty !");
    }
    else
    {
        printf("Queue Created : ");
        int i;
        for(i = front;i<rear;i++)
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