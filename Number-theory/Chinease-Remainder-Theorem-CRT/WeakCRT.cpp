/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
//const int N = 10e9;

vector<int> A;
vector<int> M;

int ext_gcd(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = ext_gcd(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - y1 * (a / b);

    return gcd;
}

pair<int , int> WeakCRT()
{
    if(A.size() != M.size() )
        return {-1, -1};
    int a1 = A[0];
    int m1 = M[0];
     for(int i = 1 ; i < A.size(); i++)
     {
        int a2 = A[i];
        int m2 = M[i];
        int p , q;
        ext_gcd(m1,m2, &p , &q);

        int x = (a1 * m2 * q + a2 * m1 * p) % (m1 * m2);

        a1 = x;
        if (a1 < 0)
            a1 += (m1*m2);
        m1 = m1 * m2; 


     }    
    
  

    return  {a1 , m1};
}


int main()
{
    int n ;
    cin >> n;
    int a, b;
    while(n--)
    {
        cin >> a >> b;
        M.push_back(a);
        A.push_back(b);
        
    }
    pair<int, int> p = WeakCRT();

    cout << p.first << " " << p.second << endl;
}
