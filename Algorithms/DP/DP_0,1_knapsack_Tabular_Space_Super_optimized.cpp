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
	vector<int > prev (MaxW+1, 0) ;
    for(int w = wt[0] ; w <= MaxW ; w++)
    {
        prev[w] = val[0];

    }
    // we dont need two array, becasue we are actually using prev arry from the ind 0
    // and storing it in cur array from index MaxW, 
    // actually we dont need cuu array cz we can do it in the same arry 
    // fiilling it from the last index !!
    for(int ind = 1; ind < n; ind++ )
    {
        for(int W = MaxW; W >=0 ; W--) // iteratinfg from the last
        {
            int notTake = 0 + prev[W];
	        int Take = INT_MIN;
            if(wt[ind] <= W)
            {
                Take = val[ind] + prev[W-wt[ind]] ;

            }

            prev[W] = max(Take, notTake);
        }
        
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