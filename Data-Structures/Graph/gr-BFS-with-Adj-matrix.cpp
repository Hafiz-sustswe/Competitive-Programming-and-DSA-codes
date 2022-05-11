
#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
bool visited[100];
queue<int> q;
void  bfs(int source, int node   )
{

	q.push(source);
	visited[source] = true;

	while(!q.empty())
	{

		int f = q.front();
		cout << f << endl;
		q.pop();
		for(int i = 0 ; i <= node ; i++)
		{

			if(adj[f][i] == 1  && visited[i] == false)
			{
				q.push(i);
				visited[i] = true;
			}
		}
	}
}
int main()
{
	int node , edge;
	cin >> node >> edge;
	int n1 , n2;
	for(int i = 0 ; i < edge ; i++)
	{
		cin >> n1 >> n2;
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;

	}


	
	bfs(n1,node );
}
