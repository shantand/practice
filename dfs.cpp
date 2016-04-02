//DFS in a graph where input is a adjacency matrix
#include <bits/stdc++.h>

using namespace std;

int main()
{
	//input
	//I am going to tell number of edges and then store it in 2d matrix
	stack<int> vertex_stack;
	
	int n, v1, v2, value; // no of vertices
	cin >> n;
	int graph[n][n];
	int visited[n];

	//Mark all vertices as unvisited.
	for(int i=0;i<n;i++)
	{		
		visited[i] = 0;
	}

	int edges;
	cin >> edges;

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			graph[i][j] = 0;

	for(int i=0;i<edges;i++)
	{
		// input of the form
		// 1 2 25
		cin >> v1 >> v2 >> value;
		graph[ v1 ][ v2 ] = value;
		graph[ v2 ][ v1 ] = value; // unidirectional graph
	}

	//lets put vertex 0 in the stack.
	vertex_stack.push(0);
	

	while(vertex_stack.empty() != true )
	{
		int current_vertex = vertex_stack.top();
		vertex_stack.pop();

		if(visited[current_vertex] != 1)
		{
			printf("%d->",current_vertex);
			for(int j=0;j<n;j++)
			{
				if( graph[current_vertex][j] != 0 ) 
					vertex_stack.push(j);				
			}
		}
		visited[current_vertex] = 1;		
	}

	return 0;
}