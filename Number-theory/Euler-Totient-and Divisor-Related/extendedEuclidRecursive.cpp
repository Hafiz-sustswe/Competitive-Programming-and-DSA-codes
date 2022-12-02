#include<bits/stdc++.h>
using namespace std;

int  ext_gcd(int a, int b , int *x , int  *y )
{
    if(b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1 , y1;
    int gcd = ext_gcd(b, a % b, &x1 , &y1);

    *x = y1;
    *y = x1 - y1 * (a/b);

    return gcd;

}


int main()
{
    int a, b, x, y;
    cin >> a >> b;
    ll gcd = ext_gcd(a,b,&x,&y);
    cout << " " << x << " " << y  << " " << gcd << endl;



}

