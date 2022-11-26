// bfs with minimum cost count

#include<bits/stdc++.h>
#define sz 1000
using namespace std;

vector<int> adj[sz];
bool vis[sz];
int bfs(int s )
{
	queue <int> q;
	q.push(s); 
	vis[s] = true;
	int node;
	while(!q.empty())
	{
		node = q.front();
		q.pop();
		cout << node << " ";
		for(auto u : adj[node])
		{
			
			if(!vis[u])
			{
				q.push(u);
				vis[u] = true;
			}
		}
	}
}
int main()
{
	int n , m, x , y , w;
	cin >>  n >> m ;
	for(int i = 0  ; i < m ;i++)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	bfs(x) ;
}
