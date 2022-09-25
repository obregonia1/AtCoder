#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int c[3][3];
  int a[3], b[3];
  rep(i, 0, 3) rep(j, 0, 3) {
    int ci;
    cin >> ci;
    c[i][j] = ci;
  }
  
  rep(a1, 0, 101) rep(a2, 0, 101) rep(a3, 0, 101) {
    int b1 = c[0][0] - a1;
    int b2 = c[0][1] - a1;
    int b3 = c[0][2] - a1;

    a[0] = a1;
    a[1] = a2;
    a[2] = a3;
    b[0] = b1;
    b[1] = b2;
    b[2] = b3;

    int ok = 1;
    rep(i, 0, 3) rep(j, 0, 3) if (a[i] + b[j] != c[i][j]) ok = 0;
    if (ok) {
      cout << "Yes" << endl;
      return 1;
    }
  }
  cout << "No" << endl;
}
