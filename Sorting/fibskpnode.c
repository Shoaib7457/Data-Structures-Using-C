#include <stdio.h>
#include <malloc.h>
struct Node 
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
void insert()
{
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    printf("\n Enter the value of the node : ");
    scanf("%d",&new->data);
    new->next = head;
    head = new;
}

void skipprint()
{
    struct Node *temp = head;
    int i = 1,a = 0,b = 1,c;
    printf("%d\n",temp->data);
    temp = temp->next;
    while(temp != NULL)
    {
        while(i>=0)
        {
            if(i == 1)
            {
                printf("%d\t",temp->data);
            }
            temp = temp->next;
            i--;
        }
        c = a+b;
        printf("%d\n",c);
        i = c;
        a = b;
        b = c;
    }
}

void main()
{
    for(int i = 0;i<15;i++)
    {
        insert();
    }
    skipprint();
}