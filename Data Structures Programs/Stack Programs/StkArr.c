#include <stdio.h>

void push();
int pop();
int peep();
void display();
int empty();
int full();

int ar[10];
int top = -1;

int full()
{
    if(top >= 9)
    return 1;
    else
    return 0;
}
int empty()
{
    if(top == -1)
    return 1;
    else
    return 0;
}

void push()
{
    if(full())
    {
        printf("\nStack is FULL !");
    }
    else
    {
        int val;
        printf("\nEnter the data : ");
        scanf("%d",&val);
        
        top++;
        ar[top] = val;
        printf("\nData Added Successfully !\n");
    }
}

int pop()
{
    if(empty())
    {
        printf("\nStack is Empty ! ");
    }
    else
    {
        int b = ar[top];
        top--;
        return b;
        printf("\nData Poped Successfully !\n");
    }
}

int peep()
{
    if(empty())
    {
        printf("\nStack is Empty ! ");
    }
    else
    {
        int b = ar[top];
        return b;
        printf("\nData Peeped Successfully !\n");
    }
}

void display()
{
    printf("\n Stack Created : ");
    for(int i = top;i>=0;i--)
    {
        printf(" %d ",ar[i]);
    }
}

void main()
{
    int ch;
    while(1)
    {
    printf("\n \nEnter 1 for push \n Enter 2 for pop \n Enter 3 for peep \n Enter 4 for Display \n Enter 5 for Exit \n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :
        {
            push();
            break;
        }
        case 2 : 
        {
            int a = pop();
            printf("\nValue Poped : %d \n",a);
            break;
        }
        case 3 :
        {
            int b = peep();
            printf("\nValue Peeped : %d \n",b);
            break;
        }
        case  4: 
        {
            display();
            break;
        }
        case 5 :
        {
            return;
        }
    }
}
}
