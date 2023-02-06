#include <stdio.h>
#include <stdlib.h>

// Defining the structure of node 

struct Node 
{
    int data;
    struct Node *next;
};

// initialising the head.

struct Node *head = NULL;

// Method to add a node at beginning.

void addbeg()
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d",&new->data);
    new->next = head;
    head = new;
}

// Method To Add A Node At Last .

void addlast()
{
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d",&new->data);
    new->next = NULL;
    if(head == NULL)
    {
        head = new;
    }
    else
    {
        struct Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}

void add_inbetwn()
{
    int pos,k=1;
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = head;
    printf("Enter Position : ");
    scanf("%d",&pos);
    printf("Enter Data : ");
    scanf("%d",&new->data);
    while(k<pos && temp != NULL)
    {
        temp = temp->next;
        k++;
    }
    if(k!=pos)
    {
        printf("Desired Position Does Not Exist !");
    }
    else
    {
        new->next = temp->next;
        temp->next = new;
    }
}

void add_pos()
{
    int pos,k=1;
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = head;
    printf("Enter position : ");
    scanf("%d",&pos);
    printf("Enter Data : ");
    scanf("%d",&new->data);
    if(pos == 1)
    {
        new->next = head;
        head = new;
    }
    else
    {
        while(k<pos-1 && temp != NULL)
        {
            temp = temp->next;
            k++;
        }
        if(k!=pos-1)
        {
            printf("Desired Position Does Not Exist");
        }
        else
        {
            new->next = temp->next;
            temp->next = new;
        }
    }

}

void dellast()
{
    if(head == NULL)
    {
        printf("List is Empty !");
    }
    else
    {
        struct Node *st;
        struct Node *temp = head;
        while(temp->next!=NULL)
        {
            st = temp;
            temp = temp->next;
        }
        st->next = NULL;
        free(temp);
    }
}


void display()
{
    struct Node *node = head;
    while(node != NULL)
    {
        printf("%4d",node->data);
        node = node->next;
    }
}
// Main Method .

void main(void)
{
    int ch;
    while(1)
    {
        printf("\n\n Enter 1 to insert at beginning \n Enter 2 to insert at last \n Enter 3 to insert in between \n Enter 4 to delete node at beginning \n Enter 5 to delete node at last \n Enter 6 to delete node at position \n Enter 7 to Display \n Enter 8 To Exit ");
        printf("\n Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            {
                addbeg();
                break;
            }
            case 2 :
            {
                addlast();
                break;
            }
            case 3 :
            {
                add_inbetwn();
                break;
            }
            case 4 :
            {
                add_pos();
                break;
            }
            case 5 :
            {
                dellast();
                break;
            }
           /* case 6 : 
            {
                delnode();
                break;
            }*/
            case 7 :
            {
                display();
                break;
            }
            case 8 :
            {
                return;
            }
        }
    }
}