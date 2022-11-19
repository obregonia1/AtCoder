#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<int> cs(n + 1, 0);
  rep(i, 1, n) {
    cs[i + 1] = cs[i] + (s.substr(i - 1, 2) == "AC");
  }

  rep(i, 0, q) {
    int l, r;
    cin >> l >> r;

    l--;
    cout << cs[r] - cs[l + 1] << endl;
  }
}

