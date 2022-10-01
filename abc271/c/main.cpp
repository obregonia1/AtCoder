#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> set(n + 2);
  rep(i, 0, n) {
    int a;
    cin >> a;
    set[min(n + 1, a)] = 1;
  }

  for (int read = 1; n >= 0; ++read) {
    n -= set[read] ? 1 : 2;
    if (n < 0) cout << read - 1 << endl;
  }
}