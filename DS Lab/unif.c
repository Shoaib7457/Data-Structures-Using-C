#include <stdio.h>
int Set();

int Set()
{
    int i,l,j=0,x,a;
    printf("Enter the size of the array : ");
    scanf("%d",&l);
    int s[l];
    for(i = 0;i<l;i++)
    {
        x = j-1;
        scanf("%d",&a);
        while(x>=0)
        {
            if(s[x] == a)
            {
                break;
            }
            x--;
        }
        if(x<0)
        {
            s[j]=a;
            j++;
        }
    }
    return s;
}
void main()
{
    int *s1;
    *s1 = Set();
    int i;
   /* int *s2 = Set();
    int i,j,k,m,q,p,f,l;
    k = sizeof(s1)/sizeof(int);
    l = sizeof(s2)/sizeof(int);
    printf("%d",k);*/
    printf("Set 1 : ");
    for(i =0;i<3;i++)
    {
        printf("%d ", s1[i]);
    }
   /* printf("Set 2 : ");
     for(i = 0;i<l;i++)
    {
        printf("%d ",s2[i]);
    }

    int s3[20];
    for(i=0;i<l;i++)
    {
        s3[i] = s1[i];
    }
    q=k;
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
                s3[k] = s2[i];
                k++;
            }
    }
    printf("\nUnion of both sets : \n ");
    for(i = 0;i<k;i++)
    {
        printf(" %d ",s3[i]);
    }*/
}