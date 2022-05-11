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
	string s;
	getline(cin ,s);

	string temp;
	vector<string> v;

	for(auto u : s)
	{
		if( isspace(u))
		{	v.push_back(temp);
			temp.clear();
		}
		else
			temp += u;
	}
	v.push_back(temp);

	map<string,int> m;

	int maxfr = 0;

	for(auto u : v)
	{
		m[u]++;
		maxfr = max(maxfr,m[u]);
	}
	
	 string ans ;
  for(auto u : m)
	{
		if(maxfr == u.second)
			{
				ans = u.first;
				break;
			}
	}
	cout << ans << " " << maxfr <<endl;
	return 0;
}