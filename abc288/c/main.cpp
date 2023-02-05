#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  dsu uf(n);
  int ans = 0;
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    if (uf.same(a, b)) ans++;
    else uf.merge(a, b);
  }
  cout << ans << endl;
}

