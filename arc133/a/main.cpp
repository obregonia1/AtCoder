#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int m = 0;
  for(auto& ai : a) {
    cin >> ai;
    m = max(m, ai);
  }
  rep(i, 0, n - 1) {
    if (a[i] > a[i + 1]) {
      m = a[i];
      break;
    }
  }
  // cout << m << endl;

  rep(i, 0, n) {
    if (a[i] != m) cout << a[i] << ' ';
  }

}

