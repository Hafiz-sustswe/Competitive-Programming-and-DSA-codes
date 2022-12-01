#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug 01

int N = 10000;
int prime[10000];
int status[10000/32 + 1];  

bool Check(int index,int bitNumber){
	int x = status[index] & (1<<bitNumber);
	if( x == 0 ) {
		return false; // prime
	}
	else {
		return true; // composite
	}
}

void Set(int index,int bitNumber){
	status[index] = status[index] | (1 << bitNumber);
}

void sieve()
{
     int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(i/32, i%32) == false )
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				Set(j/32, j%32);
	 		 }
		 }
	 }
	
	 
}

bool isPrime( int num ) {
	if( num == 2 ) return true;
	else if( num % 2 == 0 ) return false;
	else {
		return !Check(num/32, num%32);
	}
}

int main()
{
	sieve();
	for (int i = 2; i < 100; i++)
	{
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}

	retrun 0;
}
