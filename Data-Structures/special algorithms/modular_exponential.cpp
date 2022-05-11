/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;
int mod_exp(int a ,int n , int p)
{
	int res = 1;
	while(n)
	{
		if(n % 2 )
		{
			res = (res*a) % p;
			n--;
		}
		else
		{
			a = (a*a) % p;
			n /= 2;
		}
	}
	return res;

}
int main()
{
	int a,n,p;
	cin >> a >> n >> p;

	cout << mod_exp(a,n,p);
	return 0;
}