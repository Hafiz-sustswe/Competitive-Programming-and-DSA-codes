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

	int a[] ={-4,5,-7,5,-8,3,-9},j=0,p=0,n=0,k=0;
		int pos[20],neg[20];
	for (int i = 0; i < 7; i++)
	{

		if(a[i] > 0)
			{
				pos[j++] = a[i];
				p++;
			}
		else
		{
			neg[k++] = a[i];
			n++;
		}
	}
	for(int i = 0; i < p; i++ )
	{
		for( int j =0 ; j < p ;j++)
		{
			if( pos[i] < pos[j] )
			{
				int temp = pos[i];
				pos [i] = pos[j];
				pos[j] = temp;
			}
		}
	}
	for( int i=n,j=0; i<(n+p);i++,j++)
	{
		neg[i]=pos[j];
	}

	for( int i=0;i<(p+n);i++)

	{
		printf("%d ",neg[i]);
	}




	return 0;
}