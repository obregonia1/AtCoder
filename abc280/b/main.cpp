#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> s;
  rep(i, 0, n) {
    ll si;
    cin >> si;
    s.push_back(si);
  }
  vector<ll> a(n);
  rep(i, 0, n) {
    if (i == 0) {
      a[i] = s[i];
      continue;
    }
    a[i] = s[i] - s[i - 1];
  }
  rep(i, 0, n) {
    if (i != n - 1) cout << a[i] << ' ';
    else cout << a[i] << endl;;
  }
}
