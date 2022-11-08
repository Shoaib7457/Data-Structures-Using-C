#include <stdio.h>
#include <stdlib.h>

// Declaration Of Various Methods.

void add_beg();
void add_last();
void del_beg();
void del_last();
void add_prev();
void add_pos();
void del_pos();
void del_node();
void ins_sort();
void display();

// Defining Structure Of The Node.

struct Node 
{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

// TO ADD NODE AT THE BEGINNING !

void add_beg()
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter the data : ");
	scanf("%d",&new_node->data);
	new_node->next = head;
	head = new_node;
	
	printf("\nNode Added Successfully !\n");
}

// TO ADD NODE AT LAST !

void add_last()
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter the data : ");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		struct Node *p = head;
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = new_node;
		
	}
	printf("\nNode Added Successfully !\n");
	
}

// TO DELETE NODE FROM THE BEGINNING. 

void del_beg()
{
	if(head == NULL)
	{
		printf("\nList Is Empty !\n");
	}
	else
	{
		struct Node *ptr = head;
		head = head->next;
		free(ptr);
		printf("\nNode Deleted Successfully !\n");
	}
}

// TO DELETE NODE FROM THE LAST.

void del_last()
{
	struct Node *ptr = head;
	if(head == NULL)
	{
		printf("\n List is Empty !");
	}
	else if(head->next == NULL)
	{
		head = head->next;
		free(ptr);
		printf("\nNode Deleted Successfully !\n");
	}
	else
	{
		struct Node *p;
		while(ptr->next != NULL)
		{
			p = ptr;
			ptr = ptr->next;
		}
		p->next = NULL;
		free(ptr);
		printf("\nNode Deleted Successfully !\n");
	}
}

//TO ADD NODE AFTER A GIVEN NODE !!

/*void add_prev()
{
	int a;
	printf("\nEnter the Node Number : ");
	scanf("%d",&a);
	struct Node  *new_node = (struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter the Data : ");
	scanf("%d",&new_node->data);
	if(head == NULL)
	{
		printf("\nList is Empty !\n");
	}
	else
	{
	struct Node *p = head;
	while(a>1)
	{
		p = p->next;
		a--;
	}
	new_node->next = p->next;
	p->next = new_node;
	printf("\nNode Added Successfully !\n");
}
}*/

void add_prev()
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

// TO ADD A NODE AT GIVEN POSITION !!

/*void add_pos()
{
	int a;
	struct Node *ptr = head;
	struct Node *p;
	printf("\nEnter the Position : ");
	scanf("%d",&a);
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter the data : ");
	scanf("%d",&new_node->data);
	if(a == 1)
	{
		new_node->next = head;
		head = new_node;
		printf("\nNode Added Successfully !\n");
	}
	else
	{
	while(a > 1)
	{
		p = ptr;
		ptr = ptr->next;
		a--;
	}
	p->next = new_node;
	new_node->next = ptr;
	
	printf("\nNode Added Successfully !\n");
	}
}*/

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

// TO DELETE A NODE AT GIVEN POSITION !!

void del_pos()
{
	struct Node *p = head;
	int a;
	printf("\nEnter the Position : ");
	scanf("%d",&a);
	if(head == NULL)
	{
		printf("\n List is Empty ! \n ");
	}
	else if(a == 1)
	{
		head = head->next;
		free(p);
		printf("\nNode Deleted Successfully !\n");
	}
	else
	{
		struct Node *p1;
		while(a > 1)
		{
			p1 = p;
			p = p->next;
			a--;
		}
		p1->next = p->next;
		free(p);
		printf("\nNode Deleted Successfully !\n");
	}	
}

// TO ADD DATA IN SORTED ORDER.

void ins_sort()
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter the data : ");
	struct Node *p = head;
	struct Node *p1;
	scanf("%d",&new_node->data);
	if(new_node->data < head->data)
	{
		new_node->next = head;
		head = new_node;
	}
	else
	{
	while(p != NULL)
	{
		if(new_node->data > p->data)
		{
			p1 = p;
			p = p->next;
		}
		else
		{
			break;
		}
	}
	if(p == NULL)
	{
		p1->next = new_node;
		new_node->next = NULL;
	}
	else
	{
	printf("%d",p->data);
	p1->next = new_node;
	new_node->next = p;
	}
	}
	printf("\n Node Added Successfully !\n");
}

// TO Delete Given Data.

void del_node()
{
	if(head == NULL)
	{
		printf("\nList Is Empty !\n");
	}
	else
	{
    int a;
    printf("Enter the Data To Delete : ");
    scanf("%d",&a);
    struct Node *p = head;
    struct Node *p1;
    if(head->data == a)
    {
        p1 = head;
        head = head->next;
        free(p1);
    }
    else
    {
    while(p != NULL)
    {
        if(a == p->data)
        {
            break;
        }
        p1 = p;
        p = p->next;
    }
    p1->next = p->next;
    free(p);
    }
	printf("\nNode Deleted Successfully !\n");
	}

}

// TO DISPLAY THE LIST.

void display()
{
	printf("\n Linked List : ");
	struct Node *ptr = head;
	while(ptr != NULL)
	{
		printf(" %d ",ptr->data);
		ptr = ptr->next;
	}
}

// MAIN METHOD.

void main()
{
	int ch;
	while(1)
	{
		printf("\nEnter 1 To Add At Beginning \nEnter 2 To Add At Last \nEnter 3 To Delete From Beginning \nEnter 4 To Delete From Last \nEnter 5 To Display \nEnter 6 To Add Node After a Given Node \nEnter 7 To Add Node At Given Position ! \nEnter 8 To Delete a Node At given position \nEnter 9 To Add Data in Sorted Order \nEnter 10 To Delete Given Data \nEnter 11 for Exit !\n\n ");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
			{
				add_beg();
				break;
			}
			case 2 :
			{
				add_last();
				break;
			}
			case 3 :
			{
				del_beg();
				break;
			}
			case 4 :
			{
				del_last();
				break;
			}
			case 5 :
			{
				display();
				break;
			}
			case 6 :
			{
				add_prev();
				break;
			}
			case 7 :
			{
				add_pos();
				break;
			}
			case 8 :
			{
				del_pos();
				break;
			}
			case 9 :
			{
				ins_sort();
				break;
			}
			case 10 : 
			{
				del_node();
				break;
			}
			case 11 :
			{
				return;
			}
		}
	}
}