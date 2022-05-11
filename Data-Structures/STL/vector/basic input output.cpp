#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n=7;
    vector <int> v(n);
    //this sets all elements to 0 automatically
    // print the vector just to be made sure
    for(int x: v)
    cout << x<<" ";

    // another way

   // vector <int> v(n,7);//sets 7 alements ,all are 10
    //initialize like arrays
    vector <char> v1{'d','e','f'};
    //initializing from an array
    int arr[] = {10,20,30};
     n= sizeof(arr)/sizeof(arr[0]);
    vector <int > v2 (arr,arr+n);
    for(int x: v2)
    cout << x<<" ";



    return 0;
}
