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
    int i = 1,a = 1;
    while(temp->next != NULL)
    {
        while(i>0)
        {
            if(i == 1)
            {
                printf("%d\t",temp->data);
            }
            temp = temp->next;
            i--;
        }
        a++;
        i = a;
    }
}

void main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();


    skipprint();
}