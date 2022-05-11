/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;
void Prime_factor(int n)
{
	for(int  i = 2 ; i <= n ;i++)
	{
		if(n % i == 0)
		{
			int cnt = 0;
			while(n % i == 0)
			{
				cnt++;
				n /= i;
			}
			cout << i << "^" << cnt << endl;
		}
	}
}
int main()
{	
	int n;
	cin >> n;
	Prime_factor(n);

	return 0;
}