//not ompiled at sublime but online c++ compiler

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{


	vector<int> v={1,3,2,3,4,4,6,6,6};
	sort(v.begin(),v.end());
	int sz = unique(v.begin(),v.end()) -v.begin();
    for(int i = 0; i < sz; i++)
        cout << v[i] << " ";

}