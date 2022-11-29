#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

ll a, b, n;
ll f(ll x) {
  return (a * x) / b - a * (x / b);
}

int main() {
  cin >> a >> b >> n;

  ll ans = 0;
  ans = max(ans, f(n));
  if (b - 1 <= n) ans = max(ans, f(b - 1));

  cout << ans << endl;
}

