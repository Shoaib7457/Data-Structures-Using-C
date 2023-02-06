#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left,*right;
};

struct Node *root = NULL;

struct Node *getnode()
{
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    new->left  = NULL;
    new->right = NULL;
    printf("Enter the value : ");
    scanf("%d",&new->data);

    return new;
}

void insert(struct Node *new)
{
    if(root == NULL)
    {
        root = new;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        struct Node *prev;
        struct Node *curr  = root;
        while(curr != NULL)
        {
            prev = curr;
            if(new->data < curr->data)
                curr = curr->left;
            else
                curr = curr->right;
        }
        if(new->data < prev->data)
            prev->left = new;
        else
            prev->right = new;
    }
}

void avg()
{
    int c = 0,sum = 0;
    struct Node *ptr = root;
    while(root->right != NULL)
    {
        sum += root->data;
        c++;
        root = root->right;
    }
    printf("%d",sum/c);
}

void main()
{
    for(int i  = 0;i<10;i++)
    {
        struct Node *new  = getnode();
        insert(new);
    }
    avg();
}