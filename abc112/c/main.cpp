#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int x[n], y[n], h[n];
  rep (i, 0, n) cin >> x[i] >> y[i] >> h[i];  

  rep(cx, 0, 101) rep(cy, 0, 101) {
    int H = 0;
    rep(i, 0, n) if (h[i]) H = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
    int ok = 1;
    rep(i, 0, n) if (max(H - abs(x[i] - cx) - abs(y[i] - cy), 0) != h[i]) ok = 0;
    if (ok) {
      printf("%d %d %d\n", cx, cy, H);
      return 0;
    }
  }
}
