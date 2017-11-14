#include<stdio.h>
int n,g[20][20],q[20],visited[20],f=0,r=-1;
void breadth_first_search(int c)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(!visited[i]&&(g[c][i]==1))
		q[++r]=i;
	}
	if(f<=r)
	{
		visited[q[f]]=1;
		breadth_first_search(q[++f]);
	}
}
void depth_first_search(int c)
{
	visited[c]=1;
	printf("%4d\n",c);
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && g[c][i]==1)
		{
			depth_first_search(i);
		}
	}
}	
int main()
{
	int i,j,c;
	printf("enter the number of cities\n");
	scanf("%d",&n);
	printf("enter the adjancy matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
		}
	}
	while(1)
	{
		printf("enter your choice\n");
		printf("1.depth first search\n2.breadth first search\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("enter starting city\n ");
				scanf("%d",&c);
				depth_first_search(c);
				break;
			case 2: printf("enter starting city\n ");
				scanf("%d",&c);
				for(i=0;i<n;i++)
				{
					if(visited[i])
					printf("\t%d\n",i);
				}
				break;
		}
	
	}
}
	
	
	
	
	
	
	
	
