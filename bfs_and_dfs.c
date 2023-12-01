#include<stdio.h>
#include<stdlib.h>
int source,V,E,visited[20],G[20][20],Q[20],front=-1,rear=-1;
void DFS(int i){
	int j;
	visited[i]=1;
	printf("%d->",i);
	for(j=1;j<=V;j++)
	{
		if(G[i][j]==1&&visited[j]==0)
			DFS(j);
	}
	
}
void enqueue(int item){
	if(front==-1&&rear==-1)
	{
		front=rear=0;
		Q[rear]=item;
	}
}
int dequeue(){
	int item;
	if(front==-1&&rear==-1)
		return -1;
	else if(front==rear)
	{
		item=Q[front];
		front=rear=-1;
		return item;
	}
	else
	{
		return Q[front++];
	}
}
void BFS(int s){
	int i;
	visited[s]=1;
	printf("%d->",s);
	enqueue(s);
	while(front!=-1)
	{
		s=dequeue();
		for(i=1;i<=V;i++)
		{
			if(G[s][i]==1&&visited[i]==0)
			{
				printf("%d->",i);
				visited[i]=1;
				enqueue(i);
			}
		}
	}
}
int main(){
	int i,j,v1,v2;
	printf("Enter the no of vertices of the graph: ");
	scanf("%d",&V);
	for(i=1;i<=V;i++)
		for(j=1;j<=V;j++)
			G[i][j]=0;
	printf("Enter the no of edges of the graph: ");
	scanf("%d",&E);
	for(i=1;i<=E;i++)
	{
		printf("Enter the edges(v1 & v2): ");
		scanf("%d%d",&v1,&v2);
		G[v1][v2]=1;
		G[v2][v1]=1;
	}
	printf("\nThe adjacency matrix:\n");
	for(i=1;i<=V;i++)
	{
		for(j=1;j<=V;j++)
			printf("%d\t",G[i][j]);
		printf("\n");
	}
	for(i=1;i<=V;i++)
		visited[i]=0;
	printf("Enter the source: ");
	scanf("%d",&source);
	printf("\nDFS\n");
	DFS(source);
	for(i=1;i<=V;i++)
		visited[i]=0;
	printf("\nBFS\n");
	BFS(source);
}


Algorithm

Step 1: Start

Step 2: Read the number of vertices (V) and initialize variables: E, visited[20], G[20][20], Q[20], front, rear

Step 3: Initialize the adjacency matrix G with zeros (G[i][j] = 0)

Step 4: Read the number of edges (E)

Step 5: Loop for each edge i from 1 to E
        a. Read edges v1 and v2
        b. Set G[v1][v2] = 1 and G[v2][v1] = 1 (since it's an undirected graph)

Step 6: Print the adjacency matrix G

Step 7: Initialize visited array with zeros

Step 8: Read the source vertex (source)

Step 9: Call DFS function with the source vertex
        a. Inside DFS function:
            i. Mark the current vertex as visited
            ii. Print the current vertex
            iii. Loop for each adjacent vertex j
                - If G[i][j] is 1 and visited[j] is 0, recursively call DFS(j)

Step 10: Reset visited array to zeros

Step 11: Print "BFS" and call BFS function with the source vertex
        a. Inside BFS function:
            i. Mark the source vertex as visited, print it, and enqueue it
            ii. While the queue is not empty
                - Dequeue a vertex (s)
                - Loop for each adjacent vertex i
                    - If G[s][i] is 1 and visited[i] is 0
                        - Mark i as visited, print it, and enqueue it

Step 12: End
