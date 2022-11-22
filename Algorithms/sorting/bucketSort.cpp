/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

float arr[1000];

void bucketSort(int n)
{
    vector<float> v[n];

    for(int i = 0; i < n ; i++)
    {
        int b = n * arr[i];
        v[b].push_back(arr[i]);

    }
    for(int i = 0; i < n; i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    int indx = 0;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {

            arr[indx++] = v[i][j];
        }

    }
}


int main()
{

     int n ;
     cin >> n;
     for(int i = 0; i < n;i++)
        cin >> arr[i];
    bucketSort(n);
    for(int i = 0; i < n ; i++ )
        cout << arr[i] << " ";
    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16




