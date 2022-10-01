#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<vector<int> > a(n);
  rep(i, 0, n) {
    int l;
    cin >> l;
    rep(j, 0, l) {
      int ai;
      cin >> ai;
      a[i].push_back(ai);
    }
  }
  rep(i, 0, q) {
    int s, t;
    cin >> s >> t;
    cout << a[s - 1][t - 1] << endl;
  }
}
