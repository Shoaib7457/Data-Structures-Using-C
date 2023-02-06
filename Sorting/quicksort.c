#include <stdio.h>

int partition(int a[],int lb,int ub)
{
    int i,j,pos,temp;
    pos = a[lb];
    i = lb+1;
    j = ub;
    while(i<j)
    {
        while(pos>a[i])
            i++;
        while(pos<a[j])
            j--;
        if(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        temp = a[j];
        a[j] = a[lb];
        a[lb] = temp;
    }
    return j;
}


void quicksort(int ar[],int lb,int ub)
{
    int pivot;
    if(lb<ub)
    {
        pivot = partition(ar,lb,ub);
        quicksort(ar,pivot+1,ub);
        quicksort(ar,lb,pivot-1);
    }
}

int main()
{
    int n,i,ar[100];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i = 0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Array Before Sorting : ");
    for(i = 0;i<n;i++)
        printf("%3d",ar[i]);
    quicksort(ar,0,n-1);
    printf("Array After Sorting : ");
    for(i= 0;i<n;i++)
        printf("%3d",ar[i]);
    return 0;
}