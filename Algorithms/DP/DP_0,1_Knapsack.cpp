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

int f(int ind , int W , vector<int> &wt , vector<int> &val , vector<vector<int>> &dp)
{
	if(ind == 0)
	{
		if(wt[0] <= W)
			return val[0];
		return 0;
	}
	if(dp[ind][W] != -1)
		return dp[ind][W];

	int notTake = 0 + f(ind-1 , W , wt, val, dp);
	int Take = INT_MIN;
	if(wt[ind] <= W)
	{
		Take = val[ind] + f(ind - 1 , W - wt[ind] , wt ,val , dp );

	}

	return dp[ind][W] = max(Take, notTake);
}



int knapscak(vi wt, vi val , int n , int W)
{
	vector<vector<int>> dp (n , vector<int>(W+1, -1));
	return f(n-1, W, wt, val, dp);
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