#include <stdio.h>
#include<malloc.h>
int *create_Set(int m,int *p)
{
    int a,x,j=0,n,fl,i;
    n = m;
    printf("\nEnter the elements of the array : ");
    for(i = 0;i < n;i++)
    {
        x = j-1;
        scanf("%d",&a);
        while(x>=0)
        {
            if(p[x] == a)
            {
                break;
            }
            x--;
        }
        if(x==-1)
        {
            *(p+j) = a;
            j++;
        }
    }

    return p;
    free(p);
}
void main()
{
    int a,b,pos,f,l,j,i,k,s,n1,n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int* p = (int *)calloc(n,sizeof(int));
    a = *create_Set(n,p);
    printf("Enter the size of the array : ");
    scanf("%d",&n1);
    int* p1 = (int *)calloc(n1,sizeof(int));
    b = *create_Set(n1,p1);
    int *ptr = (int *)calloc(100,sizeof(int));
    printf("\n Set 1 : ");
    for(i = 0;i<a;i++)
    {
        printf(" %d ",p[i]);
        k++;
    }
    printf("\n Set 2 : ");
    for(i = 0 ;i<b;i++)
    {
        printf(" %d ",p1[i]);
        s++;
    }
   /* l = 0;
    while(k--)
    {
        *(ptr+l) = *(ar+k);
        printf("%d",ptr[l]);
        l++;
    }
   for(i = 0;ptr[i]!='\0';i++)
   {
    f = 0;
    for(j = 0;arr[j]!='\0';j++)
    {
        if(*(ptr+i) == *(arr+j))
        {
            f = 1;
        }
    }
    if(f == 0)
    {
        *(ptr+l) = *(arr+j);
        l++;
    }
   }
    printf("\n Union is : ");
    for(i = 0;ptr[i]!='\0';i++)
    {
        printf(" %d ",*(ptr+i));
    }*/
}
