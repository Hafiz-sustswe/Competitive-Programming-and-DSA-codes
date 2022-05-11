#include<iostream>
#include<vector>

using namespace std;
int main()
{

    vector <int> v;
    v.push_back(10);
    for(int x:v)
    cout<<x;
    //
//    to take input,we cannot use cin funtion directly
    for(int i=0;i<10;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int x:v)
    cout<<x;


// resize funtion for allocating memory
    vector<int>v1;

    v1.resize(10);
    for(int i=0;i<10;i++)
    cin>>v1[i];

    for(int x:v1)
    cout<<x<<" ";
    v.pop_back;//deletes an element from the last



    return 0;
}
