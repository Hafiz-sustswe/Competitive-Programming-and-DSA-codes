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
	set<int> myset;
	myset.insert(45);
	myset.insert(11);
	myset.insert(45);//45 is already inserted,so it will not be inserted;
	for(auto x: myset)
	{
		cout<<x<<" ";
	}

//variable taken from user
	/*int x,n;
	for(int i=0;i<n;i++)
		{
			cin>>x;
			myset.insert(x);
		}
	*/
	return 0;
}