#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;

  int t = 0, c1 = 0, c2 = 0, c3 = 0;
  rep(i, n) {
    string s;
    cin >> s;

    for (int j = 0; j + 1 < s.size(); ++j) {
      if (s[j] == 'a' && s[j + 1] == 'b') {
        ++t;
      }
    }

    if (s[0] == 'b' && s.back() == 'a') {
      ++c1;
    }
    else if (s.back() == 'a') {
      ++c2;
    }
    else if (s[0] == 'b') {
      ++c3;
    }
  }

  if (c2 == 0 && c3 == 0) {
    cout << t + max(c1 - 1, 0) << endl;
  }
  else {
    cout << t + c1 + min(c2, c3) << endl;
  }
}