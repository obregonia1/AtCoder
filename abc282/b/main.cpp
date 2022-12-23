#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for(auto& si : s) cin >> si;

  int result = 0;
  rep(i, 0, n) rep(k, i + 1, n) {
    bool flag = true;
    rep(j, 0, m) {
      if (s[i][j] == 'x' && s[k][j] == 'x') flag = false;
    }
    if (flag) result++;
  }

  cout << result << endl;
}

