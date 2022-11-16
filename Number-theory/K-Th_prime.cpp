/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

bool ar[90000001];

void seive()
{
	int maxN = 90000001;
	ar[0] = ar[1] = true;
	memset(ar,false,sizeof(ar));
	for(int i = 2 ; i*i <= maxN ; i++ )
	{
		if(!ar[i])
		{
			for(int j = i*i ; j <= maxN; j += i)
			{
				ar[j] = true;
			}
		}
	}
	for(int i = 2 ; i <= maxN; i++)
	{
		if(!ar[i])
			primes.push_back(i);
	}
	
}
int main()
{
	int t ;
	cin >> t;
	seive();
	while(t--)
	{
	int n;
	cin >> n;
	cout << primes[n-1] << endl;
	}
	return 0;
}