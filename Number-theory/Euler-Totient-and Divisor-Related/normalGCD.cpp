#include<bits/stdc++.h>
using namespace std;

int GCD(int a, b) // assuming a > b
{
    if(b == 0)
    {
        return a;

    }
    else
        return GCD(b, a % b);


}

int gcd2(int a, int b) { // assuming a >= b
  while (true) {
    int remainder = a % b;
    if (remainder == 0) {
      return b;
    }
    a = b; // a takes the bigger side
    b = remainder; // b takes the smaller side
  }
}
int gcd3 (int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int gcd4(int a, int b) {
  int ans = 1;
  for (int i = 1; i <= min(a, b); i++) {
    if (a % i == 0 && b % i == 0) {
      ans = i;
    }
  }
  return ans;
}

int main()
{
    int n;
    cin >> n;


}

