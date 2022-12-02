#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bigmod(ll base,ll power, ll mod)
{
    ll x = base;
    ll result = 1;
    while(power)
    {
        if(power & 1) // checks odd
        {
            result = ( x * result) % mod;
        }
        x = (x * x) % mod;
        power >>= 1; //p /= 2
    }
    return result;
}


int main()
{
    long long base, power, mod;
    cin >> base >> power >> mod;
    cout << bigmod(base, power, mod);




}

