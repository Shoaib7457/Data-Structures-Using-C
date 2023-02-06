#include <stdio.h>

int main(void)
{
    int t,l,i,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        char b[l];
        scanf("%s",&b);
        for(i = 0;b[i]!='\0';i++)
        {
            if(b[i] == b[i+1])
            {
                if(b[i] == 1)
                {
                   c=1;
                   break;
                }
                else
                {
                    c=2;
                }
            }
        }
        if(c == 1)
        {
            printf("2");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}