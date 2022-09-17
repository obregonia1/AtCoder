#include <bits/stdc++.h>
using namespace std;
#define rep(i,a, b) for (int i = a; i < (b); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  int result = t.size();
  rep(i, 0, s.size() - t.size() + 1) {
    int count = 0;
    rep(j, 0, t.size()) {
      if (s[i + j] != t[j]) count++;
    }
    result = min(result, count);
  }
  cout << result << endl;
}
