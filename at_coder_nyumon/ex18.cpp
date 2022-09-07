#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve() {
  int n;
  cin >> n;

  int pt = 0, px = 0, py = 0;

  rep(i, n) {
    int t, x, y;
    cin >> t >> x >> y;

    int tn = t - pt, xn = abs(x - px), yn = abs(y - py);

    if (t < x + y) {
      return false;
    }

    if (t % 2 != (x + y) % 2) {
      return false;
    }
  }
  return true;
}

int main() {
  if (solve()) {
    cout << "Yes" << endl;
  } 
  else {
    cout << "No" << endl;
  }
}