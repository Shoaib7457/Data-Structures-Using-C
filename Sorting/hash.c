#include <stdio.h>

void insert(int hash[],int size)
{
    int key,index=0,i,hk;
    printf("\nEnter a value : ");
    scanf("%d",&key);
    hk = key%size;
    for(i = 0;i<size;i++)
    {
        index = (hk+i)%size;
        if(hash[index] == 0)
        {
            hash[index] = key;
            break;
        }
        if(i == size-1)
            printf("\nELements cannot be inserted !");
    }
}

void display(int hash[],int size)
{
    for(int i = 0;i<size;i++)
    {
        printf("\n Index %d \t Value = %d",i,hash[i]);

    }
}
void search(int hash[],int size)
{
    int value,key;
    printf("\nEnter the value t0 be searched : ");
    scanf("%d",&value);
    key = value % size;
    if(hash[key] == value)
        printf("\nElement Found At index : %d",key);
    else
        printf("Element Not Found\n");
}

void main()
{
    int n,ch,arr[100];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        arr[i] = 0;
    }
    while(1)
    {
        printf("\n1. Insert\n2. Display\n3. Search\n4. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert(arr,n);
            break;
        case 2:
            display(arr,n);
            break;
        case 3:
            search(arr,n); 
            break;
        case 4:
            return;
        }  
    }
}