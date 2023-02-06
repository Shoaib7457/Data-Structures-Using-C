#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *left,*right;
};

struct Node *root;

struct Node *getnode()
{
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data : ");
    scanf("%d",&new->data);
    new->left = NULL;
    new->right = NULL;

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
        struct Node *curr = root;
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

void case_a(struct Node *prev,struct Node *ptr)
{
    if(ptr == NULL)
        root = NULL;
    else if(prev->left != NULL)
        prev->left = NULL;
    else
        prev->right = NULL;

    free(ptr);
}

void case_b(struct Node *prev,struct Node *ptr)
{
    struct Node *child;
    if(ptr->left != NULL)
        child = ptr->left;
    else
        child = ptr->right;

    if(prev->left == ptr)
        prev->left = child;
    else
        prev->right = child;

    free(ptr);
}

void case_c(struct Node*prev,struct Node *ptr)
{
    struct Node *succ,*parsucc;
    succ = ptr->right;
    while(succ->left != NULL)
    {
        parsucc = succ;
        succ = succ->left;
    }
    ptr->data = succ->data;
    if(ptr->left == NULL && ptr->right == NULL)
        case_a(parsucc,prev);
}

void delete()
{
    int val;
    printf("Enter the value : ");
    scanf("%d",&val);
    struct Node *ptr = root;
    struct Node *prev;
    while(ptr != NULL)
    {
        if(val == ptr->data)
            break;
        prev = ptr;
        if(val<ptr->data)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }
    if(ptr == NULL)
    {
        printf("\n Element Not Found ");
    }
    else
    {
        if(ptr->left != NULL && ptr->right != NULL)
        {
            case_c(prev,ptr);
        }
        else
        {
            if(ptr->left != NULL)
                case_b(prev,ptr);
            else if(ptr->right != NULL)
                case_b(prev,ptr);
            else
                case_a(prev,ptr);
        }
    }
}

void inorder(struct Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}


void main()
{
    int ch;
    while(1)
    {
        printf("\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display\nEnter 4 to exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                struct Node *n = getnode();
                insert(n);
                break;
            }
            case 2:
            {
                delete();
                break;
            }
            case 3:
            {
                if(root == NULL)
                    printf("List is Empty !");
                else
                    inorder(root);
                break;
            }
            case 4:
            {
                return;
            }
        }
    }
}