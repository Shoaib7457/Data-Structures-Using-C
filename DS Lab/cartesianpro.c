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

void main()
{
    int c[100][2],x,y,sa[10],sb[10],i,j,k = 0;
    x = createSet(sa);
    y = createSet(sb);
    for(i = 0;i<x;i++)
    {
        for(j = 0;j<y;j++)
        {
            c[k][0] = sa[i];
            c[k][1] = sb[j];
            k++;
        }
    }
    printf("{");
    for(i = 0;i<x*y;i++)
    {
        printf("( %d , %d )",c[i][0],c[i][1]);
    }
    printf("}");
}

