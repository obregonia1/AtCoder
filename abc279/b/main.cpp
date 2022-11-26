#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  if (s.size() < t.size()) {
    cout << "No" << endl;
    return 0;
  }
  int tc = t.size();
  if (s == t) {
      cout << "Yes" << endl;
      return 0;
  }
  rep(i, 0, s.size() - tc + 1) {
    if (s.substr(i, tc) == t) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}

