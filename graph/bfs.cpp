#include<iostream>
#include<list>
#include<queue>
#include<cstdio>

using namespace std;

class Graph
{
	int v;
	list<int> *adj;
		
	public:
	Graph(int x)
	{
		this->v = x;
		adj = new list<int>[x];
	}
	void addEdge(int,int);
	void BFS(bool visited[], int );
};

void Graph::addEdge(int u, int v)
{
	adj[u].push_back(v);
}

void Graph::BFS(bool visited[], int v)
{
int k;
cout << v << endl;
visited[v] = true;
queue<int> q;
list<int>::iterator it;

for(it=adj[v].begin();it!=adj[v].end();it++)
q.push(*it);

while(!q.empty())
{
	k = q.front();
	if(visited[k]==false) cout << k << endl;
	visited[k] =  true;
	q.pop();
	
	for(it=adj[k].begin();it!=adj[k].end();it++)
	{
		if(visited[*it]==false) q.push(*it);
	}
}
}
int main()
{
	int n,i;
	//scanf("%d",&n);
	
	Graph g(n);
	bool visited[n];
	
	for(i=0;i<n;i++) visited[i] = false;
	
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(0, 4);
    g.addEdge(3, 5);
    
    g.BFS(visited,0);
	return 0;
}
