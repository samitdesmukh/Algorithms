#include<stdio.h>
int G[10][10], visited[10], n;
void dfs(int svertex);

int main()
{
	int i,j, svertex;
	printf("Enter total number of vertices \n");
	scanf("%d",&n);
	
	if(n>10 || n<=0)
	{
		printf("You Enter wrong value \n");
		return 1;
		
	}
	
	printf("Enter the adjacency matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	
	printf("Enter the staring vertrix \n");
	scanf("%d",&svertex);
	
	if(svertex>=10 || svertex<0)
	{
		printf("You Enter wrong value \n");
		return 1;
		
	}
	
	printf("dfs traversl from %d to %d is \n",svertex, n-1);
	dfs(svertex);
	return 0;
	
}

void dfs(int svertex)
{
	int i;
	printf("%d \t",svertex);
	visited[svertex]=1;
	for(i=0;i<n;i++)
	{
		if(G[svertex][i]==1 && !visited[i])
		{
			dfs(i);
		}
	}
}
