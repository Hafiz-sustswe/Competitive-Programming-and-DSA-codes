	
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[3] = {'a','b','c'};
	int n = 3;

	for(int mask = 0 ;  mask   < ( 1 << n) ; mask++ )
	{
		for( int i = 0 ; i <  n  ; i++)
		{
			if(mask & (1 << i))
				cout << arr[i] << " " ;

		}
		cout << endl;
	}

}