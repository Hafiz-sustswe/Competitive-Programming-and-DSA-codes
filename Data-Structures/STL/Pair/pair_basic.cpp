/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	/* pair<string,vector<int>> p;

	p.first = "Abcd";
	p.second = {1,2, 3,4};

	cout << p.first <<endl;
	for(auto v : p.second)
		{
			cout << v ;

		}
	*/

	/*sorting vector of pairs()
	vector <pair<int ,int>> v;

	v.push_back({6,5});
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({1,4});
    v.push_back({9,6});
    v.push_back({8,7});

    sort(v.begin(),v.end());

    for( auto u: v)
    	cout << u.first <<" " << u.second << endl;

	*/
	//array of pair
	pair<int ,int> p[] = {{6,5},{3,2},{8,9}};

	sort(p,p+5);



	return 0;
}