/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>


int main()
{
    
    int n;
    cin >> n;
    vi dp(n+1 , -1);
	
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout << dp[n] << endl;
    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16