/*
		Name of program		:
		Purpose				:
		Date				:
		Written By			: MD Sadman Hafiz
	*/
#include<bits/stdc++.h>
using namespace std;
queue<int> q;
vector<int>topsort;

int main()
{
    int n, m;
    while(1) {
    	topsort.clear();
    	vector<int>adj[101];
    	vector<int> indeg(101,0);
    	cin >> n >> m;
    	if(n == 0 && m == 0)
    		break;
        int u, v;
        while(m--)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            indeg[v]++;
        }
        

        for(int i = 1; i <= n; ++i)
         {
            if(indeg[i] == 0) 
            	q.push(i);
       	 }

        while(!q.empty()) 
        {
            u = q.front();
            q.pop();
            topsort.push_back(u);

            for(auto v : adj[u]) {
              
                indeg[v]--;
                if(indeg[v] == 0)
                 	q.push(v);
            }
        }

        for(int i = 0; i < topsort.size(); i++)
        {
            if(i)
            	cout << ' ';
            cout << topsort[i];
        }
        cout << endl;


       
    }

    return 0;
}
