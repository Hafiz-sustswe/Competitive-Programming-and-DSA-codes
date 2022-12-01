/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define N 150

bool isComposite[N];

vi prime;
void sieve(int n)
{
    memset(isComposite, false , sizeof(isComposite));
    for(int i = 2 ; i < n ; i++)
    {
        if(!isComposite[i])
            prime.push_back(i);
        for(int j = 0 ; j < prime.size() && i * prime[j] < n ; j++)
        {
            isComposite[i * prime[j]] = true;
            if(i % prime[j] == 0)
                break;
        }
    }
    for(auto u : prime)
    {
        cout << u << " ";
    }
}


int main()
{
   int m, n;
   cin >> n;
    sieve(n);
   
}
