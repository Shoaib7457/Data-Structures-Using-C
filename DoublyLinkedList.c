#include <stdio.h>
#include <stdlib.h>

// Defining Structure Of The Node

struct Node 
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;
struct Node *prev = NULL;

// Function to insert node at beginning   

void insbeg()
{
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d",&new->data);
    if(head == NULL)
    {
    new->next = NULL;
    new->prev = NULL;
    head = new;
    }
    else
    {
        head->prev = new;
        new->next = head;
        head = new;
        new->prev = NULL;
    }
}

// Function to insert node at last

void inslast()
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d",&new->data);
    new->next = NULL;
    if(head == NULL)
    {
        /*new->next = head;
        head = new;
        new->prev = head->next;*/
        new->prev = NULL;
        head = new;
    }
    else
    {
        struct Node *ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
        new->prev = ptr;
    }
}

// Function To Add Node In Between. 

void add_pos()
{
    int pos,k=1;
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data : ");
    scanf("%d",&new->data);
    printf("Enter the position : ");
    scanf("%d",&pos);
    struct Node *ptr = head;
    while((k < pos) && ptr->next != NULL)
    {
        ptr = ptr->next;
        k++;
    }
    if(k!=pos)
    {
        printf("Position Does Not Exist !");
    }
    new->next = ptr->next;
    new->prev = ptr;
    ptr->next = new;
}

// Function to Delete Node At Beginning .

void delbeg()
{
    if(head == NULL)
    {
        printf("List is Empty !");
    }
    else
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }
}

// Function To Delete Node At last .

void dellast()
{
    if(head == NULL)
    {
        printf("List is Empty !");
    }
    else
    {
        struct Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
}

void delnode()
{
    if(head == NULL)
    {
        printf("List is Empty !");
    }
    else
    {
        int pos,k = 1;
        struct Node *temp = head;
        printf("Enter the position : ");
        scanf("%d",&pos);
        while((k<pos) && temp->next != NULL)
        {
            temp = temp->next;
            k++;
        }
        if(k!=pos)
        {
            printf("Desired Position does Not Exist !");
        }
        else
        {
            temp->prev->next = temp->next;
            free(temp);
        }
    }
}
// Function To Display The Doubly Linked List .

void display()
{
    struct Node *node = head;
    printf("\nDoubly Linked List Created : ");
    while(node != NULL)
    {
        printf(" %d ",node->data);
        node = node->next;
    }   
}

// Main Method 

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
                insbeg();
                break;
            }
            case 2 :
            {
                inslast();
                break;
            }
            case 3 :
            {
                add_pos();
                break;
            }
            case 4 :
            {
                delbeg();
                break;
            }
            case 5 :
            {
                dellast();
                break;
            }
            case 6 : 
            {
                delnode();
                break;
            }
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