#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    v.insert(v.begin()+1,7);

    for(int x:v)
        cout<<x;

    return 0;
}



