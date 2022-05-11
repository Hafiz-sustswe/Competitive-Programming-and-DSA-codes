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
	/* std::vector<int> v{1,3,8,9,5,2,7,4,5,3,4};
	map<int,int> freq;
	int i;
	for(auto u: v)
		freq[u]++;
	for(auto x : freq)
		cout << x.first << " " << x.second<<endl;

	// if we only print x.first ,then we will get the distint characters!! o_o 
*/
	
	int n;
	cin >> n;
	map<string,int> m;
	for( int i = 0;i < n ; i++ )
	{	
		string s;
		cin >> s;
		m[s]++;
	}
	
	for(auto u : m)
		cout << u.first << " " << u.second << endl;

	//out put 
	/*  hate 2
		love 4
		peace 4
	*/





	return 0;
}