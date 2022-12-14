#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string x;
  int n;
  cin >> x >> n;
  map<char, int> m;
  rep(i, 0, 26) {
    m[x[i]] = i;
  }
  string s[n];
  for(auto& si : s) cin >> si;
  
  sort(s, s + n, [&](string a, string b) {
    int len = min(a.length(), b.length());

    rep(i, 0, len) {
      int x = m[a[i]];
      int y = m[b[i]];

      if (x != y) return x < y;
    }
    return a.length() < b.length();
  });
  rep(i, 0, n) cout << s[i] << endl;
  
}

