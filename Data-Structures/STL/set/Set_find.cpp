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
	set <int> :: iterator it;

	myset.insert(45);
	myset.insert(11);
	myset.insert(23);
	myset.insert(54);

	it = myset.find(23);
	cout<<*it <<"is present at index"<< distance(myset.begin,it); //distance funtion is difference between begin and it position

	it = myset.begin();
	if(it == myset.end)
	{
		//as 25 is not present .it will  pont to myset.end()
		cout<<"25 is not  present";
	}


	return 0;
}