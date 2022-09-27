#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int result = 1e9;
  rep(i, 0, x + 1) rep(j, 0, y + 1) {
    int k = max(x - i, y - j) * 2;
      result = min(result, i * a + j * b + k * c);
  }
     
  cout << result << endl;
}
