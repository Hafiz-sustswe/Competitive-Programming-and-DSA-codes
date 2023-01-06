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


int lcs (string x , string  y , int m , int n, vector< vector <int> > &dp )
{
   
   if( n == 0||m == 0)
    {
        return 0;
    }
    if(dp[m-1][n-1] != -1)
        return dp[m-1][n-1];

    if(x[m-1] == y[n-1])
        return dp[m-1][n-1] = 1+lcs(x,y,m-1,n-1, dp);

    return dp[m-1][n-1] = max(lcs(x,y,m-1,n, dp), lcs(x,y,m,n-1,dp));

}

int main()
{
    
    int n, m ;
    string s,s1;
    cin >> s >> s1;
    n = s.size();
    m = s1.size();
     vector<vector<int>> dp(n , vector<int>(m,-1));

    cout << lcs(s,s1,n,m, dp);

    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16