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
	int a[] ={1,3,6,3,5,4,6,3,6,6,3,7};
	int n = sizeof(a)/sizeof(a[0]);
	int b[11] ={};

	for(int i=0; i < n-1;i++)
	{
		int count =1;
		if(a[i] != -1)
			{
				for(int j=i+1; j<n;j++)
				{
					if(a[i] == a[j])
					{
						count++;
						a[j] =-1;
					}
				}
				if(count > 1)
				printf("%d is found for %d times\n",a[i],count );
			}
		
	}
}