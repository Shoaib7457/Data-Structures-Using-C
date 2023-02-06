#include <stdio.h>
#include <string.h>

int binary(char *ar,int a,int b)
{
    while(b>=0)
    {
        ar[--b] = a%2;
        a /= 2;
    }
}

int main()
{
    char p[1024][10],temp[10],b[10],s[10];
    int i,l,j,pow = 1,n,ex = 2,k;
    printf("Enter the Set String : ");
    scanf("%s",s);
    l = strlen(s);
    int t  = l;
    while(t != 0)
    {
        pow  *= ex;
        t--;
    }
    for(i = 0;i<pow;i++)
    {
        k = 0;
        binary(b,i,l);
        for(j = 0;j<l;j++)
        {
            if(b[j] == 1)
            {
                temp[k] = s[j];
                k++;
            }
        }
        temp[k] = '\0';
        strcpy(p[i],temp);
    }
    printf("{");
    for(i= 0;i<pow;i++)
    {
        printf("( %s ), ",p[i]);
    }
    printf("}");
    return 0;
}