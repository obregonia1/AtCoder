#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  ll n, t;
  cin >> n >> t;
  vector<ll> a(n);
  vector<ll> b(n);
  ll aa;
  cin >> aa;
  a[0] = aa;
  b[0] = a[0];
  rep(i, 1, n) {
    ll ai;
    cin >> ai;
    a[i] = ai;
    b[i] = b[i - 1] + ai;
  }
  ll mod = t % b.back();
  ll now = t % b.back();
  rep(i, 0, n) {
    if (mod < b[i]) {
      cout << i + 1 << ' ' << now << endl;
      return 0;
    }
    now -= a[i];
  }
}

