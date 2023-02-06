#include <stdio.h>

int s1[10],s2[10],sd1[10],sd2[10];

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

void symset(int x,int y)
{
    int l = 0,f,ss[100],i,j;
    for(i = 0;i<x;i++)
    {
        ss[i] = sd1[i];
    }
    l = x;
    for(i = 0;i<y;i++)
    {
        f = 0;
        for(j = 0;j<x;j++)
        {
            if(sd2[i] == ss[j])
            {
                f = 1;
            }
        }
        if(f == 0)
        {
            ss[l] = sd2[i];
            l++;
        }
    }
    printf("\n Symmetric Set Difference : ");
    for(i = 0;i<l;i++)
    {
        printf("  %d  ",ss[i]);
    }
}
void main()
{
    int ss[10],i,j,z,f,l,a,b,x,y;
    a = createSet(s1);
    b = createSet(s2);
    x = SetDifference(a,b,s1,s2,sd1);
    y = SetDifference(b,a,s2,s1,sd2);
    symset(x,y);
}