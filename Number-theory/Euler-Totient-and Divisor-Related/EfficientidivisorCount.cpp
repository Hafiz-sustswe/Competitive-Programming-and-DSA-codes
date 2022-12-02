#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
bool isComposite[N];

vector<int> prime ;

void sieve(int n)
{
    memset(isComposite, false, sizeof(isComposite));
    for(int i = 2 ; i < n ; i++)
    {
        if(!isComposite[i])
           {
            prime.push_back(i);
           }

        for(int j = i * i  ; j  <= n ; j += i )
        {
            isComposite[j] = true;
        }


    }

}


int countDivisor(int n)
{
  //sieve(n);
      int divisor = 1;
    for (int i = 0; i < prime.size(); i++)
    {
    if (n % prime[i] == 0)
     {
      int cnt = 1;
      while (n % prime[i] == 0)
      {
        n /= prime[i];
        cnt++;
      }
      divisor *= cnt;
    }
  }
    if (n > 1)
        divisor *= 2;
  return divisor;
}




int main()
{
    int n;
    cin >> n;
    sieve(n);
    cout << countDivisor(n) << endl;

}

