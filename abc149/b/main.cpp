#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  ll a, b, n;
  cin >> a >> b >> n;
  if (a + b < n) {
    a = 0;
    b = 0;
  }

  else if (a <= n) {
    b -= (n - a);
    a = 0;
  }
  else a -= n;

  cout << a << ' ' << b << endl;
}

