#include <stdio.h>

int adj[50][50];
int size = 4;
void create()
{
	int i,j,a;
	for(i = 0;i<size;i++)
	{
		for(j = 0;j<size;j++)
		{
			printf("Enter the value of %c and %c  :",i+65,j+65);
			scanf("%d",&a);
			adj[i][j] = a;
		}
	}
}

void display()
{
	int i,j;
	for(i = 0;i<size;i++)
	{
		for(j = 0;j<size;j++)
		{
			printf("%d\t",adj[i][j]);
		}
		printf("\n");
	}

}

void bfs()
{
	int que[50],r = -1,f = -1,i,visit[50],start;
	for(i = 0;i<size;i++)
		visit[i] = 0;
	printf("\n Enter the starting vertex number 0 to %d",size);
	scanf("%d",&start);
	que[++r] = start;
	++f;
	visit[start] = 1;
	while(r>=f)	
	{
		start = que[f++];
		printf("%c-->",start+65);
		for(i = 0;i<size;i++)
		{
			if(adj[start][i] && visit[i] == 0)
			{
				que[++r] = i;
				visit[i] = 1;
			}
	}
}
}

void dfs()
{
	int stack[50],top = -1,i,visit[50],start;
	for(i = 0;i<size;i++)
		visit[i] = 0;
	printf("\n Enter the starting vertex number 0 to %d",size-1);
	scanf("%d",&start);
	stack[++top] = start;
	visit[start] = 1;
	while(top != -1)	
	{
		start = stack[top--];
		printf("%c-->",start+65);
		for(i = 0;i<size;i++)
		{
			if(adj[start][i] && visit[i] == 0)
			{
				stack[++top] = i;
				visit[i] = 1;
			}
	}
}
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1. Create \n2.Display \n3.BFS\n4.DFS");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                bfs();
                break;
            case 4:
                dfs();
                break;
        }
    }
}