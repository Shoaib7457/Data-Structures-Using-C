#include <stdio.h>

// Function To Create Set.
int createSet(int *arr)
{
    int x,j=0,val,l,c;
    printf("Enter No. of Data To Create Set : ");
    scanf("%d",&l);
    printf("Enter the Data : ");
    while(l--)
    {
        c = 0;
        scanf("%d",&val);
        x = j-1;
        while(x>=0)
        {
            if(val == arr[x])
            break;

            x--;
        }
        if(x == -1)
        {
            arr[j] = val;
            j++;
        }
    }
    return j;
}

// Function To Generate Union Of Two Sets.
int Union(int a,int b,int *ar,int *ar1,int *ar3)
{

    int i,j,l,m,n,f;
    for(i = 0;i<a;i++)
    {
        ar3[i] = ar[i];
    }
    l = a;
    for(i = 0;i<b;i++)
    {
        f = 0;
        for(j = 0;j<a;j++)
        {
            if(ar1[i] == ar3[j])
            {
                f = 1;
            }
        }
        if(f == 0)
        {
         ar3[l] = ar1[i];
         l++;
        } 
    }
    return l;
}

// Main Method.
void main()
{
    int i,j,a,b,c,ar[10],ar1[10],ar3[10];
    a = createSet(ar);
    b = createSet(ar1);
    c = Union(a,b,ar,ar1,ar3);
    printf("\n\nSet 1 : ");
    for(i = 0;i<a;i++)
    {
        printf(" %d ",ar[i]);
    }
    printf("\n\nSet 2 : ");
    for(j = 0;j<b;j++)
    {
        printf(" %d ",ar1[j]);
    }
    printf("\n\nUnion Of both Sets : ");
    for(i = 0;i<c;i++)
    {
        printf(" %d ",ar3[i]);
    }
}