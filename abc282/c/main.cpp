#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool flag = false;
  rep(i, 0, n) {
    if (s[i] == '"') flag = !flag;
    if (s[i] == ',' && flag == 0) cout << '.';
    else cout << s[i];
  }
  cout << "\n";
}

