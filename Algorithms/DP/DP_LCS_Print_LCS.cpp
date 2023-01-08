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
    
    int n, m ;
    string s,s1;
    cin >> s >> s1;
    n = s.size();
    m = s1.size();
     vector<vector<int>> dp(n+1 , vector<int>(m+1,0));

    // for(int j = 0; j <=m ; j++)
    //     dp[0][j] = 0;
    // for(int i = 0; i <=n ; i++)
    //     dp[i][0] = 0;
    
    for(int i = 1 ; i <= n; i++)
    {
        for(int j = 1; j <=m ; j++)
        {
            if(s[i-1] == s1[j-1])
                 dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }
    
  
    int len = dp[n][m];
    string ans = "";

    for(int i = 0; i < len ; i++)
    {
        ans +="$" ;// dummy values
    }
    int index = len - 1;

    int i = n , j = m;
    while(i > 0 && j > 0)
    {
        if(s[i-1] == s1[j-1])
        {
            ans[index] = s[i-1];
            index--;
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
        {
            i--;
        }
        else
            j--;
    }
    cout << ans << endl;


}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16