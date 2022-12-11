/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define inf 1e18

#define mx INT_MAX
#define fi first
#define sc second
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fo(i, x, n) for (i = x; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define clr(x) memset(x, 0, sizeof(x))

#define sz  100
vector<ll> adj[sz];
map<pair<ll , ll> , ll> mp;
ll cost1 = 0 , cost2 = 0;
void DFS(ll source, ll parent, ll init, ll flag, ll flag1 )
{

    if(source == init && flag)
    {
        return;
    }
    for(int i = 0; i < adj[source].size() ; i++)
    {
        if(adj[source][i] == parent)
            continue;
        if(mp[{source,adj[source][i]}] == 0)
        {
            if(flag1 == 1)
                {
                    cost1 += mp[{adj[source][i], source}];
                }
            else
                {
                    cost2 += mp[{adj[source][i], source}];
                }
        }
        DFS(adj[source][i], source, init, flag + 1, flag1);
    }


    return;
}

void solve()
{
    ll m, n, p,q,r, i = 0, j = 0, sm = 0, ck = 0, sum = 0, sum1 = 0;

    // string  s, s1;
    // cin >> s;

    // cin >> n >> m;

    cin >> n;
    while(n--)
    {
        cin >> p >> q >> r;
        adj[p].push_back(q);
        adj[q].push_back(p); 
        mp[{p,q}] = r;
    }
    DFS(1,adj[1][0],1, 0, 1 );
    DFS(1, adj[1][1],1, 0,2);

    if(cost1 < cost2)
        cout << cost1 << endl;
    else
        cout << cost2 << endl;
    mp.clear();
    for(int i = 0; i <= n ; i++)
    {
        adj[i].clear();
    }
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
    // OJ();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
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
