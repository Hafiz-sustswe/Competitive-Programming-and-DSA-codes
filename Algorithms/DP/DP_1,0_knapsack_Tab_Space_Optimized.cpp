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
	
    // Actually we dont need the Whole 2D array for the previous Row's Value;
    // we can use only previous row instead;
    // so we need only one row(vector prev) for this and a vector for the current value;

    vector<int > prev (MaxW+1, 0) , cur (MaxW+1 , 0);
    for(int w = wt[0] ; w <= MaxW ; w++)
    {
        prev[w] = val[0]; // base case

    }
    for(int ind = 1; ind < n; ind++ )
    {
        for(int W = 0; W <= MaxW ; W++)
        {
            int notTake = 0 + prev[W];// instead of DP
	        int Take = INT_MIN;
            if(wt[ind] <= W)
            {
                Take = val[ind] + prev[W-wt[ind]] ;

            }

            cur[W] = max(Take, notTake);
        }
        prev = cur;
    }

	return prev[MaxW];
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