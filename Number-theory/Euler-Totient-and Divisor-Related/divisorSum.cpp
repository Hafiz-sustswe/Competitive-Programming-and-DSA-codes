#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 500000;
bool isComposite[N + 5 ];

vector<ll> primes ;

void sieve(ll n)
{

    for(ll i = 2 ; i <= n ; i++)
    {
        if(!isComposite[i])
           {
            primes.push_back(i);
           }

        for(ll j = i * i  ; j  <= n ; j += i )
        {
            isComposite[j] = true;
        }


    }

}


int divisorSum(ll n)
{
     if (n < 1)
        return 0;

    ll sum = 1;
   
    for(ll i = 0; primes[i] * primes[i] <= n ; i++)
    {

        if(n % primes[i] == 0)
        {
            int cnt = 1;
            while(n % primes[i] == 0)
            {

                n /= primes[i];
                cnt++;

            }
             sum *= (pow(primes[i], cnt)-1)/(primes[i]-1);
        }



    }
    if(n > 1)
        sum *= (pow(n, 2)-1)/(n-1);

    return sum;


}


int main()
{
    int t;
    cin >> t ;
    sieve(500000);
    while(t--){
    ll n;
    cin >> n;
   
    if(n == 2 || n == 1)
        {
            cout << n - 1 << endl;
             continue;
        }
    
    cout << divisorSum(n) - n + 1 <<  endl;
    }

}

