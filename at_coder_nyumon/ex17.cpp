#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;

  rep(i, k) {
    int aa, bb, cc;
    aa = b + c;
    bb = a + c;
    cc = a + b;
    a = aa;
    b = bb;
    c = cc;
  }

  int result;
  result = a - b;
  if (result > 1e18) cout << "Unfair\n";
  else cout << result << endl;
}