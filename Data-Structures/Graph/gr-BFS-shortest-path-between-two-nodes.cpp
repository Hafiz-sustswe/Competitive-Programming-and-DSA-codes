// bfs with minimum cost count

#include<bits/stdc++.h>
#define sz 1000
using namespace std;

std::vector<int> adj[sz];
bool vis[sz];
int bfs(int s , int d)
{
	queue <pair<int,int>> q;
	q.push({s,0}); // second for cost count
	vis[s] = true;
	int node ,cost , u;
	while(!q.empty())
	{
		node = q.front().first;
		cost = q.front().second;// for cost
		q.pop();
		if(node == d) return cost;// for minimum cost
		for(auto u : adj[node])
		{
			
			if(!vis[u])
			{
				q.push({u,cost+1});
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
	cin >> x >> y;
	cout << "Mninimum Cost USing BFS" << bfs(x,y) << endl;
}
