#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x, k;
	cin >> t;

	while(t--){
		cin >> n;
		for(int i=0;i<33;i++){
			x = pow(2, k+1) - 1;
			if(n % x == 0) {
			    cout << n / x << endl;
			    break;
			}
		}
	}
	return 0;
}