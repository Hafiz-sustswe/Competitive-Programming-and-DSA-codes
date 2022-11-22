/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int arr[1000];
void heapify(int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i)
    {

        swap(arr[i],arr[largest]);

        heapify( n, largest);
    }


}
void heapsort(int n)
{

    for(int i = n/2 -1 ; i >= 0; i--)
    {

        heapify( n,i);

    }
    for(int i = n-1;i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(i,0);

    }
}


int main()
{

     int n ;
     cin >> n;
     for(int i = 0; i < n;i++)
        cin >> arr[i];
    heapsort(n);
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


