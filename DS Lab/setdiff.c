#include <stdio.h>

int createSet(int *ar)
{
    int x,pos = 0,n,val;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the data : ");
    while(n--)
    {
        scanf("%d",&val);
        x = pos-1;
        while(x>=0)
        {
            if(ar[x] == val)
            {
                break;
            }
            x--;
        }
        if(x<0)
        {
            ar[pos] = val;
            pos++;
        }
    }
    return pos;
}

int SetDifference(int x,int y,int *a,int *b,int *c)
{
    int l = 0,i,j;
    for(i = 0;i<x;i++)
    {
        for(j = 0;j<y;j++)
        {
            if(a[i] == b[j])
            {
                break;
            }
        }
        if(j == y)
        {
            c[l] = a[i];
            l++;
        }
        
    }
    return l;
}
void main()
{
    int a,b,c[10],d[10],ar[10],x,i;
    a = createSet(c);
    b = createSet(d);
    x = SetDifference(a,b,c,d,ar);
    printf("Set Difference : ");
    for(i = 0;i<x;i++)
    {
        printf("  %d  ",ar[i]);
    }
}