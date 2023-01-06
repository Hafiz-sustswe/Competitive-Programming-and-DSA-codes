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
	int lastDuplicate=0;
	int n = sizeof(a)/sizeof(a[0]);
	for(int i=0; i < n;i++)
	{
		if(a[i] == a[i+1] && a[i] != lastDuplicate)
			{
				printf("%d ",a[i]);
				lastDuplicate = a[i];
			}





	}



	return 0;
}