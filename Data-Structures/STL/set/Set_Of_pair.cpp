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

	set<pair<int ,int>> s;

	for(int i = 0; i < 6; i++)
	{
		int a,b;
		cin >> a >> b;
		s.insert({a,b}); 
	}

	for( auto u : s)
		cout << u.first << " " << u.second << endl;
	
	return 0;
}