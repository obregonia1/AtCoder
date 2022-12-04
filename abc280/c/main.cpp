#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  int result = 0;
  rep(i, 0, t.size()) {
    if (s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}

