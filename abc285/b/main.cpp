#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  rep(i, 0, n - 1) {
    int result = 0;
    rep(k, 0, n - i - 1) {
      if (s[k] != s[i + k + 1]) result++;
      else break;
    }
    cout << result << endl;
  }
}

