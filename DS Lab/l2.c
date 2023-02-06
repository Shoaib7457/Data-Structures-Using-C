#include <stdio.h>
#include <stdlib.h>
void main()
{
    int s1,s2,l,f,j;
    printf("Enter the size of the first set : ");
    scanf("%d",&s1);
    int *ptr = (int *)malloc(s1*sizeof(int));
    printf("Enter the size of the second array : ");
    scanf("%d",&s2);
    int *ptr1 = (int *)malloc(s2*sizeof(int)); 
    int *ptr2 = (int *)malloc((s1+s2)*sizeof(int)); 
    l = s1;
    printf("Enter the elements of the first array : \n");
    for(int i = 0;i<s1;i++)
    {
        scanf("%d",ptr+i);
        ptr2[i] = ptr[i];

    }
   printf("Enter the elements of the second array : \n");
    for(int i = 0;i<s2;i++)
    {
        scanf("%d",ptr1+i);
    }
    for(int i = 0;i<s2;i++)
    {
        f = 0;
        for(j = 0;j<s1;j++)
        {
            if(ptr1[i] == ptr2[j])
            {
                f = 1;
            }
        }
        if(f == 0)
        {
            ptr2[l] = ptr1[i];
            l++;
        }
    }
    printf("Union :  ");
    for(int i = 0;i<l;i++)
    {
        printf(" %d ",ptr2[i]);
    }
}