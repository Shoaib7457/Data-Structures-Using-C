#include <stdio.h>
#include <stdlib.h>

void push();
int pop();
int peep();
void display();


typedef struct stack 
{
    int data;
   struct stack *next;
}stack;

stack *top = NULL;

void push()
{
    stack *value = (stack*)malloc(sizeof(stack));
    printf("\n Enter the data : ");
    scanf("%d",&value->data);
    value->next = top;
    top = value;
}
int pop()
{
    stack *del = NULL;
    int a;
    if(top == NULL)
    {
        printf("\n Stack is Empty! \n ");
    }
    else
    {
        a = top->data;
        del = top;
        top = top->next;
        free(del);
        return a;
    }
}
int peep()
{
    stack *del = NULL;
    int a;
    if(top == NULL)
    {
        printf("\n Stack is Empty! \n ");
    }
    else
    {
        a = top->data;
        return a;
    }
}


void display()
{
    stack *p = top;
    printf("\n Stack Created : ");
    while(p != NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n\n Enter 1 to Push \n Enter 2 to Pop \n Enter 3 to Peep \n Enter 4 to Display \n Enter 5 to Exit \n ");
        printf("\n Enter the Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: 
        {
            push();
            break;
        }
        case 2 :
        {
            int a = pop();
            printf("\n Data Poped : %d",a);
            break;
        }
        case 3 :
        {
            int a = peep();
            printf("Data Peeped : %d ",a);
            break;
        }
        case 4 :
        {
            display();
            break;
        }
        case 5 :
        {
            printf("Congrats You have Ended Eternity ! ");
            return;
        }
        }
    }
}
