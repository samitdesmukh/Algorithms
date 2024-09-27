#include<stdio.h>
void bfs(int svertex);
int G[10][10], visited[10], n;
int main()
{
	int i,j, svertex;
	printf("Enter total number of nodes \n ");
	scanf("%d",&n);
	
	if(n>10 || n<=0)
	{
		printf("you Enter invalid input \n");
		return 1;
	}
	printf("Enter adjacency matrix \n");
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
	
	printf("Enter the starting vertex \n");
	scanf("%d",&svertex);
	
	if(svertex>10 || svertex<0)
	{
		printf("you enter wrong starting vertex \n");
		return 1;
	}
	
	printf("the result of bfs traversall is \n");
	bfs(svertex);
	return 0;
}

void bfs(int svertex)
{
	int i,vertex,queue[10],front=0,rear=0;
	
	visited[svertex]=1;
	queue[rear++]=svertex;
	
	while(front<rear)
	{
		vertex=queue[front++];
		printf("%d",vertex);
		
		for(i=0;i<n;i++)
		{
			if(G[vertex][i]==1 && !visited[i])
			{
				
				visited[i]=1;
				queue[rear++]=i;
			}
		}
	}
	
	
}























