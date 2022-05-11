#include<bits/stdc++.h>

using namespace std;

class Graph
{
	int V;
	vector<int> *l;
	public :
		
		Graph(int v)
		{
			V = v;
			l = new vector<int>[V];
		}
		 
		void addEdge(int i , int j,bool undir = true )  
		{
			l[i].push_back(j);
			
			if(undir)
			{
				l[j].push_back(i);
			}

		}
		void printGraph()
		{
			for(int i = 0 ; i < V; i++)
			{
				cout << i << "-->";
				for(auto node : l[i])
				{
					cout << node << " ";

				}
				cout << endl;
			}
		}
		void BFS(int source)
		{
			queue<int> q;
			bool *visited = new bool[V] {0};
			q.push(source);
			visited[source] = true;
			while(!q.empty())
			{
				int f = q.front();
				cout << f << endl;
				q.pop();

				for(auto nbr : l[f] )
				{
					if(!visited[nbr])
					{
						q.push(nbr);
						visited[nbr] = true;
					}
				}
			}
		}
};
int main()
{
	Graph g(6);
	
	g.addEdge(0 ,1);
	g.addEdge(5,4);
	g.addEdge(2,1);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(1,3);
	//g.printGraph();
	g.BFS(1  );
	return 0;

}