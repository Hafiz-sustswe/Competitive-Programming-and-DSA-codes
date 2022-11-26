#include<bits/stdc++.h>
#define sz 1000
using namespace std;

std::vector<int> adj[sz];
bool vis[sz];

void dfs(int node)
{
	vis[node] = true;
	cout << node << " ";
	for(auto u : adj[node])
	{
		if(!vis[u])
			dfs(u);
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
	dfs(1);
}