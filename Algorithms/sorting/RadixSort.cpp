
/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int arr[1000];

void countSort(int n, int pos)
{
    int output[n];
    int countA[10];
    memset(countA,0,sizeof(countA));


    for(int i = 0; i < n; i++)
    {

        countA[(arr[i]/pos) % 10]++;

    }
    for(int i = 1; i <= 10 ; i++)
    {
        countA[i] += countA[i-1];

    }
    for(int i = n-1;i >= 0; i--)
    {
        output[countA[(arr[i]/pos ) % 10] - 1] = arr[i];

        countA[(arr[i]/pos) % 10]--;

    }
    for(int i = 0; i < n ; i++)
        arr[i] = output[i];
}
int getMax(int n)
{
    int m = 0;
    for(int i  = 0; i < n ; i++)
    {
        if(arr[i] > m)
            m = arr[i];
    }
    return m;
}

void radixSort( int n)
{
    int mx = getMax(n);


    for(int pos = 1 ; mx/pos > 0; pos *= 10)
        countSort(n, pos);
}

int main()
{

     int n ;
     cin >> n;
     for(int i = 0; i < n;i++)
        cin >> arr[i];
    radixSort(n);
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



