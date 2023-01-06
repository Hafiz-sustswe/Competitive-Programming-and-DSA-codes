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
	int a[] ={1,3,3,5,4,6,6,6,7};
	int n = sizeof(a)/sizeof(a[0]);
	int b[8] ={};
	for(int i=0; i < n;i++)
	{	
		b[a[i]]++;
	}
	for(int i=1;i<=7; i++)
	{
		if(b[i] >1)
			printf("%d appears for %d times\n",i,b[i]);
	}

	return 0;
}