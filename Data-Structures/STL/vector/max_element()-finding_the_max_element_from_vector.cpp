/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/
// will not be compiled by sublime but online compiler

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{1,2,7,5,3,9};
	vector<int> :: iterator it = max_element(v.begin(),v.end());
	//if we want index 
	// int n = max_element()-v.begin();

	cout << *it;
	return 0;
}