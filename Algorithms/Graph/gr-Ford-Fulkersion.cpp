/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>

// [u][v] = capacity , [v][u] = flow;

vector<vector<int>> rcGraph,graph;
int n;

int bfs(int s, int d , vector<int> &parent)
{
	fill(parent.begin(), parent.end() , -1);

	parent[s] = s;
	queue<pair<int, int>> q;
	q.push({s,INT32_MAX});

	while(!q.empty())
	{
		int currentNode = q.front().first;
		int flow  = q.front().second;
		q.pop();
		for(int nextNode : graph[currentNode])
		{
			if(parent[nextNode] == -1 && rcGraph[currentNode][nextNode] > 0)
			{
				parent[nextNode] = currentNode;
				int miFlow = min( flow,rcGraph[currentNode][nextNode]);
				if(nextNode == d)
					return minFlow;

				q.push({nextNode, minFlow});
			}
		}
	}
}

int maxFlow(int source , int sink)
{
	int flow = 0;
	vector<int> parent(n);
	int BottleNeck = 0;

	while(BottleNeck = bfs(source,sink, parent))
	{
		int currentNode = sink;
		while(currentNode != source)
		{
			int prevNode = parent[currentNode];
			rcGraph[prevNode][currentNode] -= BottleNeck;
			rcGraph[currentNode][prevNode] += BottleNeck;
			currentNode = prevNode;

		}
	}
}



int main()
{
    
    int n;
    cin >> n;
    cout << "You Have inputed " << n << endl;

    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16