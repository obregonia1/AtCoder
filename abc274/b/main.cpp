#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<int> x(w, 0);
  rep(i, 0, h) {
    rep(j, 0, w) {
      char c;
      cin >> c;
      if (c == '#') x[j]++;
    }
  }
  rep(i, 0, w) {
    if (i == w - 1) cout << x[i] << endl;
    else cout << x[i] << ' ';
  }
}

