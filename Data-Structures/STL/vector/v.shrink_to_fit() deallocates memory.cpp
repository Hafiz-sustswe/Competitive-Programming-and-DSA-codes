#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n=7;
    vector <int> v;
    v.resize(10);
    cout<<v.capacity()<<endl;
      v.resize(0);
    v.reserve(10);
    cout<<v.capacity()<<endl;
    v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);
     v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.shrink_to_fit();
    cout<<v.capacity();





    return 0;
}

