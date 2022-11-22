#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int q;
  cin >> q;
  map<int, set<int>> g;

  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;
    int a, b;
    cin >> a >> b;
    if (t == 1) g[a].insert(b);
    if (t == 2) g[a].erase(b);
    if (t == 3) {
      if (g[a].count(b) == 1 && g[b].count(a) == 1) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
}
