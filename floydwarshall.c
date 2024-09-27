#include<stdio.h>
#define INF 99
void floydwarshall(int G[10][10], int n);
int main()
{
	int i,j,G[10][10],n;
	printf("Enter total number of vertices \n");
	scanf("%d",&n);
	
	if(n>10 || n<=0)
	{
		printf("you enter wrong input \n");
		return 1;
	}
	
	printf("Enter 99 for inf and and non negative int for edge weight adjacency matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	
	printf("the result of floydwarshall is \n");
	floydwarshall(G,n);
	return 0;
	
}
void floydwarshall(int G[10][10], int n){
	
int dist[10][10],i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			dist[i][j]=G[i][j];
		}
	}
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(dist[i][k]+dist[k][j]<dist[i][j])
			{
			dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(dist[i][j]==INF)
			printf("Inf ");
			else
			printf("%d",dist[i][j]);
			
		}
		printf("\n");
	}
	
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
