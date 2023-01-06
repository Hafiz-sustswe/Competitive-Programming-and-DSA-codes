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
	for(int i=0; i < n;i++)
	{
		if(a[i] == a[i+1] )
			{
				int j=i+1;
				while(a[i] == a[j])
					j++;


				printf("%d is Appearing %d times\n",a[i],j-i);
				i=j-1;
			}





	}



	return 0;
}