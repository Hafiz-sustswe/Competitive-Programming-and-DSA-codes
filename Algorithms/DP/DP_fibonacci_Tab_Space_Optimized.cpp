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
    int prev2 = 0;
    int prev = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        int curr = prev2 + prev;
        prev2 = prev;
        prev = curr;
    }
    
    cout << prev << endl;
    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16