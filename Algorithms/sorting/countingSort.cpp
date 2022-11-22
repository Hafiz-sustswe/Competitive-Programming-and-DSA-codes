/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int RANGE = 10000;
int arr[1000];

void countSort(int n)
{
    int output[n];
    int countA[RANGE];
    memset(countA,0,sizeof(countA));


    for(int i = 0; i < n; i++)
    {

        countA[arr[i]]++;

    }
    for(int i = 1; i <= RANGE ; i++)
    {
        countA[i] += countA[i-1];

    }
    for(int i = n-1;i >= 0; i--)
    {
        output[countA[arr[i]] - 1] = arr[i];

        countA[arr[i]]--;

    }
    for(int i = 0; i < n ; i++)
        arr[i] = output[i];
}


int main()
{

     int n ;
     cin >> n;
     for(int i = 0; i < n;i++)
        cin >> arr[i];
    countSort(n);
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



