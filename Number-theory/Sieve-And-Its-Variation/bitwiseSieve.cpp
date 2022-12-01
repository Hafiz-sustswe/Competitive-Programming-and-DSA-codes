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


int N = 99998953;
int status[99998953/32 + 100];

bool Check(int index,int bit){
	int x ;
    x = status[index] & (1 << bit);
	if( x == 0 ) {
		return false;
	}
	else {
		return true;
	}
}
void Set(int index, int bit)
{
    status[index] = status[index] | (1 << bit);
}
void bitwiseSieve()
{

    int sqrtN = int(sqrt(N));
    for (int i = 3; i <= sqrtN; i += 2)
    {
        if (Check(i / 32, i % 32) == false)
        {
            for ( int j = i * i; j <= N; j += 2 * i)
            {
                Set(j / 32, j % 32);
            }
        }
    }
    cout << 2 << endl;
    int j = 1;
    for(int i = 3  ; i <= N ; i += 2)
    {

        if (!Check(i / 32, i % 32))
          {

              j++;
              if(j % 100 == 1)
              {
               cout << i << endl;
              }
          }
    }
   
}

void solve()
{
    ll m, n, i = 0, j = 0, sm = 0, ck = 0, sum = 0, sum1 = 0;

    // string  s, s1;
    // cin >> s;

    // cin >> n >> m;

    bitwiseSieve();
    // vi  v(n) ;
    // for(int i = 0 ; i < n ; i++)
    //{
    //	cin >> v[i];
    // }

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
    //cin >> T;
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
