/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int , int> &p1 , const pair<int , int>  &p2)
{
	if(p1.first > p2.first)
		return 1;
	else if(p1.first == p2.first)
		return (p1.second < p2.second);
	return 0;
}

int main()
{
	std::vector< pair < int , int > > v;
	v = {{4 , 500} , {3 , 245} , {5 , 433} , {4 , 543}};//Solve,penalty

	sort(v.begin(),v.end(),cmp);

	for( auto u : v)
		cout << u.first << " " << u.second << endl;



	return 0;
}