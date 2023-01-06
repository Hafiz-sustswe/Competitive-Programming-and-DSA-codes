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
     vector<int> prev(n+1, 0) , cur(m+1 ,0);

    // for(int j = 0; j <=m ; j++)
    //     dp[0][j] = 0;
    // for(int i = 0; i <=n ; i++)
    //     dp[i][0] = 0;
    
    for(int i = 1 ; i <= n; i++)
    {
        for(int j = 1; j <=m ; j++)
        {
            if(s[i-1] == s1[j-1])
                 cur[j] = 1+prev[j-1];
            else
                cur[j] = max(prev[j] , cur[j-1]);
        }
        prev = cur ;
    }
    
    cout << prev[m];
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16