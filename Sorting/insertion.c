#include <stdio.h>

void InsertionSort(int ar[],int n)
{
    int i,j,v;
    for(i = 1;i<=n-1;i++)
    {
        v = ar[i];
        j = i;
        while(ar[j-1] > v && j>=1)
        {
            ar[j] = ar[j-1];
            j--;
        }
        ar[j] = v;
    }
}

void main()
{
    int n,arr[100];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array : ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray Before Sorting : ");
    for(int i = 0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    InsertionSort(arr,n);
    printf("\n\nArray After Sorting : ");
    for(int i = 0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}