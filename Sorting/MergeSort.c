#include <stdio.h>

void merge(int a[],int tp[],int lb,int mid,int ub)
{
    int i,lower,pos,size;
    lower = mid-1;
    pos = lb;
    size = ub;

    while((lb<=lower) && (mid<=ub))
    {
        if(a[lb] < a[mid])
            tp[pos++] = a[lb++];
        else
            tp[pos++] = a[mid++];
    }
    while(lb<=lower)
        tp[pos++] = a[lb++];
    while(mid<=ub)
        tp[pos++] = a[mid++];
    for(i = 0;i<=size;i++)
        tp[i] = a[i];
}

void mergesort(int a[],int t[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid = (ub+lb)/2;
        mergesort(a,t,lb,mid);
        mergesort(a,t,mid+1,ub);
        merge(a,t,lb,mid+1,ub);
    }
}

int main()
{
    int n,i,ar[1000],tmp[1000],low = 0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for( i = 0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Array before sorting : ");
    for(i = 0;i<n;i++)
        printf("%3d",ar[i]);
    mergesort(ar,tmp,low,n-1);
    printf("Array After Sorting : ");
    for(i = 0;i<n;i++)
        printf("%3d",ar[i]);
    return 0;
}