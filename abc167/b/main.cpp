#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  ll a, b, c, k;
  cin >> a >> b >> c >> k;

  if (a >= k) cout << k << endl;
  else if (a + b >= k) cout << a << endl;
  else cout << a - (k - a - b) << endl;
}

