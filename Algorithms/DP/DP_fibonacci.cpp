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

int fibo(int n , vi &dp)
{
	if(n <= 1)
	{
		return n;
	}
	if(dp[n] != -1 )
		return dp[n];

	return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);

}
int main()
{
    
    int n;
    cin >> n;
    vi dp(n+1 , -1);
	
    cout << fibo(n,dp) << endl;

    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16