#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n=7;
    vector <int> v;
    v.assign(n,5);//first n will be 5;
    v.erase(3);//iterator position
    for(int x:v)
        cout<<x;








    return 0;
}



