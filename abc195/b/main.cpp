#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i <= (b); ++i)

int main() {
  int a, b, w;
  cin >> a >> b >> w;
  int mi = 1e9;
  int ma = 0;
  rep(n, 0, 1000000) {
    if (a * n <= 1000 * w && 1000 * w <= b * n) {
      mi = min(mi, n);
      ma = max(ma, n);
    }
  }
  if (ma == 0) cout << "UNSATISFIABLE" << endl;
  else cout << mi << ' ' << ma << endl;
  
}
