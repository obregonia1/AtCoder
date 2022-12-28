#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int result = 0;
  rep(i, 0, n) {
    int v, w, x, y, z;
    cin >> v >> w >> x >> y >> z;
    if (v + w + x + y + z < 20) result++;
  }

  cout << result << endl;
}

