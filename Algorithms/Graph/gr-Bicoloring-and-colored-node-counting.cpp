/*
Program short detail : L.OJ-1009
Written by           : Md Sadman Hafiz, SWE, SUST
*/


#include<bits/stdc++.h>
using namespace std;

#define mod  1000000007
#define inf  1e18
#define PI 3.1415926535897932384626
#define mx INT_MAX

const int N = 3e5, M = N;

#define fi   first
#define sc   second
#define ll  long long
#define pb   push_back
#define mp   make_pair
#define pii  pair<int,int>
#define vi   vector<int>
#define vl   vector<ll>
#define vs   vector<string>
#define mii  map<int,int>

#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fo(i,n) for(i=0;i<n;i++)
#define w(x)    int x; cin>>x; while(x--)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define clr(x) memset(x, 0, sizeof(x))

#define MX  20009


vi v[MX];
int color[MX];
int white = 0;
int red = 1;
int black = 2;
int lyk = 0;
int vamp = 0;
ll sum = 0, i ;
int  caseNo = 1;
void bfs(int x)
{
	vamp = 0, lyk = 0;
	queue<int> q;
	q.push(x);
	color[x] = black;
	vamp++;
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		for(auto u : v[node])
		{
			if(color[u] == white){
				q.push(u);
				if(color[node] == black )
				{
					color[u] = red;
					lyk++;
				}
				else
				{
					color[u] = black;
					vamp++;
				}
			}
		}
	}
	
	
}
 
void clearALL()
{
	clr(color);
	fo(i,MX)
		v[i].clear();
}

void solve() 
{
  int n , u , w ;
  vamp = 0, lyk = 0 , sum = 0;
  clearALL();
  cin >> n;
  fo(i,n)
  	{
  		cin >> u >> w;
  		v[u].pb(w);
  		v[w].pb(u);
  		
  	}
 
	fo(i,MX)
	{
		vamp = 0, lyk = 0;
		if(color[i] == white && v[i].size() > 0)
			{
				bfs(i);
			}
		sum += max(vamp,lyk);
				
	}
	cout << "Case " <<  caseNo++ << ": " << sum << endl;
  
}
 
void OJ()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
	//OJ();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T = 1;
	
	
    cin >> T;
    while(T--) {
    	
      solve();
    }

    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16
