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
	vector<int> v{1,2,7,5,3,9};
	vector<int> :: iterator it = max_element(v.begin(),v.end());

	cout << *it;
	return 0;
}