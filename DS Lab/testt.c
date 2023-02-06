#include <stdio.h>  
#include<malloc.h>  
int *getarray()  
{  
    int size;  
    printf("Enter the size of the array : ");  
    scanf("%d",&size);  
    int *p= (int *)calloc(size,sizeof(int));  
    printf("\nEnter the elements in an array");  
    for(int i=0;i<size;i++)  
    {  
        scanf("%d",&p[i]);  
    }  
    return p;  
}  
int main()  
{  
   int *ptr;  
   ptr=getarray();  
   int length=sizeof(*ptr);  
   printf("Elements that you have entered are : ");  
   for(int i=0;ptr[i]!='\0';i++)  
    {  
      printf("%d ", ptr[i]);  
    }  
  return 0;  
}  