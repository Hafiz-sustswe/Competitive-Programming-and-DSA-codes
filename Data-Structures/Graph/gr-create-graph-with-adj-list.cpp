#include<iostream>
#include<list>
#include<vector>
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
	g.printGraph();
	return 0;

}