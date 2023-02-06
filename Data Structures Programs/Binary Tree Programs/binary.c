#include <stdio.h>
#include <stdlib.h>

// Definition of node of binary tree.

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// initialising the root node !

struct Node *root = NULL;

// Method to make a new node !

struct Node *getnode()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data : ");
    scanf("%d",&new_node->data);
    new_node->left = NULL;
    new_node->right = NULL;
    
    return new_node;
}

// Method to insert in binary tree !

void insert(struct Node *new_node)
{
    if(root == NULL)
    {
        root = new_node;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        struct Node *prev;
        struct Node *curr = root;
        while(curr!=NULL)
        {
            prev = curr;
            if(new_node->data < curr->data)
                curr = curr->left;
            else
                curr = curr->right;
        }
        if(new_node->data < prev->data)
            prev->left = new_node;
        else
            prev->right = new_node;
    }
}



void case_a(struct Node*prev ,struct Node *ptr)
{
    if(ptr == root)
        root = NULL;
    else if(prev->left == ptr)
        prev->left = NULL;
    else
        prev->right = NULL;
}

void case_b(struct Node*prev ,struct Node *ptr)
{
    struct Node *child;
    if(ptr->left!=NULL)
        child = ptr->left;
    else
        child = ptr->right;

    if(prev->left == ptr)
        prev->left = child;
    else    
        prev->right = child;

    free(ptr);
    
}
void case_c(struct Node*prev ,struct Node *ptr)
{
    struct Node *succ,*parsucc;
    succ = ptr->right;
    while(succ->left != NULL)
    {
        parsucc = succ;
        succ = succ->left;
    }
    ptr->data = succ->data;
    if(succ->left == NULL && succ->right == NULL)
    {
        case_a(parsucc,succ);
    }
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
        printf("\nElement not found !");
    } 
    else
    {
        if(ptr->left != NULL && ptr->right != NULL)
            case_c(prev,ptr);
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
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%i\t",root->data);
        inorder(root->right);
    }
}

void postorder(struct Node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}

void preorder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void maximum(struct Node *root)
{
    struct Node *p = root;
    while(p->right != NULL)
        p = p->right;
    printf("Maximum Number in BST : %d",p->data);
}

void minimum(struct Node *root)
{
    struct Node *p = root;
    while(p->right != NULL)
        p = p->left;
    printf("Maximum Number in BST : %d",p->data);
}



void main()
{
    int ch;
    while(1)
    {
        printf("\nEnter 1 To insert\nEnter 2 to display\nEnter 3 to exit\nEnter 4 to delete node\nEnter 5 to postorder\nEnter 6 to preorder\nEnter 7 for maximmum\nEnter 8 for Minimum\n");
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
                inorder(root);
                break;
            }
            case 3:
            {
                return;
            }
            case 4:
            {
                delete();
                break;
            }
            case 5:
            {
                postorder(root);
                break;
            }
            case 6:
            {
                preorder(root);
                break;
            }
            case 7:
            {
                maximum(root);
                break;
            }
            case 8:
            {
                minimum(root);
                break;
            }
        }
    }
}