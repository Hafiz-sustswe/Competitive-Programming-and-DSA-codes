/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;
int bin_exp(int a,int n)
{
	int res = 1;
	while(n)
	{
		if(n % 2)
		{
			res *= a;
			n--;
		}
		else
		{
			a *= a;
			n /= 2;
		}
	} 
	return res;
}
int main()
{
	int a,n;
	cin >> a >> n;
	cout << bin_exp(a,n);
	return 0;
}