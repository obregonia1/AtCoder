#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  vector<int> cs(n + 1, 0);
  for (int i = 1; i < n; ++i) {
    cs[i + 1] = cs[i] + (s.substr(i - 1, 2) == "AC");
  }

  rep(i, q) {
    int l, r;
    cin >> l >> r;

    --l;

    cout << cs[r] - cs[l + 1] << endl;
  }
}