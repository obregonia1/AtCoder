#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  rep(i, 0, m) {
    int c;
    cin >> c;
    if (n <= a) n += b;
    if (n < c) {
      cout << i + 1 << endl;
      return 0;
    }
    n -= c;
  }

  cout << "complete" << endl;
}

