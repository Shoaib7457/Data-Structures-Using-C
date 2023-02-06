#include <stdio.h>

void main()
{
    int a,i,j=0,k=0,l,m,x,y,f,p,q;
    printf("Enter the length of the first array : ");
    scanf("%d",&l);
    int s1[l];
    for(i = 0;i<l;i++)
    {
        x = j-1;
        scanf("%d",&a);
        while(x>=0)
        {
            if(s1[x] == a)
            {
                break;
            }
            x--;
        }
        if(x<0)
        {
            s1[j]=a;
            j++;
        }
    }
    printf("Enter the length of the second array : ");
    scanf("%d",&m);
    int s2[m];
    for(i = 0;i<m;i++)
    {
        y = k-1;
        scanf("%d",&a);
        while(k>=0)
        {
            if(s2[y] == a)
            {
                break;
            }
            y--;
        }
        if(y<0)
        {
            s2[k]=a;
            k++;
        }
    }
    printf("Set 1 : ");
    for(i = 0;i<j;i++)
    {
        printf("%d ",s1[i]);
    }
    printf("Set 2 : ");
     for(i = 0;i<k;i++)
    {
        printf("%d ",s2[i]);
    }

    int s3[20];
    for(i=0;i<j;i++)
    {
        s3[i] = s1[i];
    }
    q=j;
    for(i = 0;i<k;i++)
    {
        f=0;
        for(p = 0;p<q;p++)
        {
            if(s2[i] == s3[p])
            {
            f=1;
            }
        }
        if(f == 0)
            {
                s3[j] = s2[i];
                j++;
            }
    }
    printf("\nUnion of both sets : \n ");
    for(i = 0;i<j;i++)
    {
        printf(" %d ",s3[i]);
    }

}