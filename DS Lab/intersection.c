#include <stdio.h>

int createSet(int *arr)
{
    int j = 0,x,p,d,val;
    printf("Enter the Size of Array  : ");
    scanf("%d",&d);
    printf("Enter the data :");
    for(int i = 0;i<d;i++)
    {
        scanf("%d",&val);
        x = j-1;
        while(x>=0)
        {
            if(arr[x] == val)
            {
            break;
            }
            x--;
        }
        if(x==-1)
        {
            arr[j] = val;
            j++;
        }
    }
    return j;
}

void Intersection(int a,int b,int *a1,int *a2,int *a3)
{
    int n,m,i,j,k=0;
    n = a;
    m = b;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<m;j++)
        {
            if(a1[i] == a2[j])
            {
                a3[k] = a1[i];
                k++;
            }
        }
    }
    printf("\n\nIntersection : ");
    for( i = 0;i<k;i++)
    {
        printf(" %d ",a3[i]);
    }
}

void main()
{
    int i,j,a,b,ins,ar1[10],ar2[10],intrs[10],k=0;
    a = createSet(ar1);
    b = createSet(ar2);
    printf("\n\nSet 1 :");
    for(i= 0;i<a;i++)
    {
        printf(" %d ",ar1[i]);
    }
    printf("\n\nSet 2 :");
    for(i = 0;i<b;i++)
    {
        printf(" %d ",ar2[i]);
    }
    Intersection(a,b,ar1,ar2,intrs);
}