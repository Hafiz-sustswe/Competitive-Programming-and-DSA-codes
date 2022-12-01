/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vl vector<ll>

#define N 100000
bool isComposite[N + 5];

vi prime;

void sieve(int n)
{
    memset(isComposite, false, sizeof(isComposite));
    for (int i = 2; i < n; i++)
    {
        if (!isComposite[i])
        {
            prime.push_back(i);
        }

        for (int j = i * i; j <= n; j += i)
        {
            isComposite[j] = true;
        }
    }
}
void segSieve(ll L, ll R)
{
    bool isComposite2[R - L + 1];
    memset(isComposite2, false, sizeof(isComposite2));
    if (L == 1)
        isComposite2[0] = true;
    for (ll i = 0; prime[i] * prime[i] <= R; i++)
    {
        ll now = prime[i];
        ll base = prime[i] * prime[i];

        if (base < L)
        {
            base = ((L + now - 1) / now) * now;
        }
        for (ll j = base; j <= R; j += now)
            isComposite2[j - L] = true;
    }
    for (ll i = 0; i <= R - L; i++)
    {
        if (!isComposite2[i])
            cout << L + i << endl;
    }
}

void solve()
{
    ll m, n, i = 0, j = 0, sm = 0, ck = 0, sum = 0, sum1 = 0;

    // string  s, s1;
    // cin >> s;
    ll L, R;
    cin >> L >> R;
    segSieve(L, R);
    cout << endl;
}

int main()
{
    // OJ();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve(10000);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
