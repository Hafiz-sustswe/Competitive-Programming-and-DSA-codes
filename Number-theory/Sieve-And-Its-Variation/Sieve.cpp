#include <bits/stdc++.h>
using namespace std;

const ll N = 100000;
bool isComposite[N + 5];

vl prime;

void sieve(ll n)
{
    isComposite[1] = isComposite[0] = 2;
    for (ll i = 2; i < n; i++)
    {
        if (!isComposite[i])
        {
            prime.push_back(i);
        }

        for (ll j = i * i; j < n; j += i)
        {
            isComposite[j] = true;
        }
    }
}
void solve()
{
    int m, n, s = 0, ck = 0, sum1 = 0, sum2 = 0;
    // long long  a[N] ;
    // string  s1, s2;

    // cin >> m >> n;
    cin >> n;
    // cin >> s1;
    sieve(n);

    
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
