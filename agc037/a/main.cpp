#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  // set se;
  int result = 0;
  string p = "", n = "";
  rep(i, 0, s.size()) {
    n += s[i];
    if (p != n) {
      result++;
      p = n;
      n = "";
      continue;
    }
    else {
      // p += s[i];
    }

  }

  cout << result << endl;
}

