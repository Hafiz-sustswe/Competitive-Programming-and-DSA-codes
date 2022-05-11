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
	map<string,int> id;

	id["Hafiz"] = 2;
	id["karim"] = 1;
	id["Rahim"] = 6;
	id["Arif"] = 7;
	id["Ibrahim"] =5;

	for(auto u : id)
	cout << u.first << " " << u.second <<endl;

	return 0;
}