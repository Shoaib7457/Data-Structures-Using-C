#include <stdio.h>
void main()
{
    int a[10];
    int b[10];
    int k,f;
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    k = 0;
    for(int i = 0;i<10;i++)
    {
        f = 0;
        for(int j = 0;j<k;j++)
        {
            if(a[i] == b[j])
            f = 1;
        }
        if(f==0)
        {
            b[k] = a[i];
            k++;
        }
    }
    for(int i = 0;i<k;i++)
    {
        printf(" %d ",b[i]);
    }
}