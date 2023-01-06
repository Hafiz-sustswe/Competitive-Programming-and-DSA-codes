/*
	Name of program		:
	Purpose				:
	Date				:29-04-2021
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int arr[] ={1,2,3,4,5,7,8,10,12};
	int diff= arr[0];
	int n = sizeof(arr)/sizeof(arr[0]);
	int b[12+1] ={0};

	for( int i = 0; i <= 12; i++)
	{
		b[arr[i]]++;
		
	}
	for( int i = 1;i <= 12; i++)
	{
		if(b[i] == 0)
			printf("%d ",i);
	}


	return 0;
}