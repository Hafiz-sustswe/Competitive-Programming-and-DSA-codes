#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binaryExp(ll base,ll power)
{
    ll x = base;
    ll result = 1;
    while(power)
    {
        if(power & 1) // checks odd
        {
            result = ( x * result);
        }
        x = (x * x);
        power >>= 1; //p /= 2
    }
    return result;
}


int main()
{
    long long base, power, mod;
    cin >> base >> power ;
    cout << bigmod(base, power);




}

