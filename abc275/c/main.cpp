#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)
using P = pair<int, int>;

int main() {
  set<P> st;
  vector<P> ps;
  rep(i, 0, 9) {
    string s;
    cin >> s;
    rep(j, 0, 9) {
      if (s[j] == '#') {
        st.emplace(i, j);
        ps.emplace_back(i, j);
      }
    }
  }

  int n = ps.size();
  int ans = 0;
  rep(ai, 0, n) rep(bi, 0, n) if (ai != bi) {
    P a = ps[ai], b = ps[bi];
    int di = b.first - a.first;
    int dj = b.second - a.second;
    P c(b.first - dj, b.second + di);
    P d(c.first - di, c.second - dj);
    if (st.count(c) && st.count(d)) {
      ans++;
    }
  }
  ans /= 4;
  cout << ans << endl;
}

