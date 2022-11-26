#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
#define white 1
#define grey 2
#define black 3
int color[100];
int node;
int edge;
dfsVisit(int x)
{
	color[x] = grey;
	for(int i = 0 ; i < node ; i++)
	{
		if(adj[x][i] == 1)
		{
			if(color[i] == white)
			{
				dfsVisit(i);

			}
		}

	}
	color[x] = black;
}
void dfs()
{
	for(int i = 0 ; i < node ; i++)
	{
		color[i] = white;
	}
	for(int i = 0; i  < node ; i++)
	{
		if(color[i] == white)
		{
			dfsVisit(i);
		}
	}
}

int main()
{
	
	cin >> node >> edge;
	int n1 , n2;
	for(int i = 0 ; i < edge ; i++)
	{
		cin >> n1 >> n2;
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;

	}

                                                  
	
	dfs();
}