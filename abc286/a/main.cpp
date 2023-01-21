#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  vector<int> a(n);
  for(auto& ai : a) cin >> ai;
  vector<int> b;
  rep(i, 0, n) {
    if (i >= p - 1 && i <= q - 1) b.push_back(i + r - p);
    else if (i >= r - 1 && i <= s - 1) b.push_back(i - r + p);
    else b.push_back(i);
  }
  for(auto& bi : b) cout << a[bi] << ' ';
}

