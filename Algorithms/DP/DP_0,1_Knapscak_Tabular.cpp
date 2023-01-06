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


int knapscak(vi &wt, vi &val , int n , int MaxW)
{
	vector<vector<int>> dp (n , vector<int>(MaxW+1, 0));
    for(int w = wt[0] ; w <= MaxW ; w++)
    {
        dp[0][w] = val[0]; // Base Case

    }
    for(int ind = 1; ind < n; ind++ )
    {
        for(int W = 0; W <= MaxW ; W++)
        {
            int notTake = 0 + dp[ind-1][W];// instead of Recursion
	        int Take = INT_MIN;
            if(wt[ind] <= W)
            {
                Take = val[ind] + dp[ind - 1][W-wt[ind]] ;

            }

            dp[ind][W] = max(Take, notTake);// memoization
        }
    }
	return dp[n-1][MaxW];
}

int main()
{
    
    int n = 6;
    
    vector<int> wt = {3 ,2 ,5};
    vector<int> val = { 30, 40 , 60};
    cout << knapscak(wt , val , 3, 6);
    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16