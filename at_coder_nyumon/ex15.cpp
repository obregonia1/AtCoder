#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, q;
  cin >> n >> m >> q;

  vector<vector<int>> g(n);
  rep(i, m) {
    int u, v;
    cin >> u >> v;

    --u, --v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  vector<int> col(n);
  for (auto& coli : col) {
    cin >> coli;
  }

  rep(i, q) {
    int t, x;
    cin >> t >> x;

    --x;

    cout << col[x] << endl;

    if (t == 1) {
      for (auto v : g[x]) {
        col[v] = col[x];
      }
    }
    else {
      int y;
      cin >> y;

      col[x] = y;
    }
  }
}