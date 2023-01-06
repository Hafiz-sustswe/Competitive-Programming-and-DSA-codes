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
	int arr[] ={1,2,3,4,5,7,8,10,12};
	int diff= arr[0];
	int n = sizeof(arr)/sizeof(arr[0]);

	for( int i = 0; i < n; i++)
	{
		if((arr[i]-i) != diff)
		{
			while(diff < (arr[i]-i))
			{
				printf("%d\n",i+diff);
				diff++;
			}
		}
	}



	return 0;
}