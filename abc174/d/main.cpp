#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int count = 0;
  rep(i, 0, n) if (s[i] == 'R') count++;
  bool flag = false;
  int result = 0;
  rep(i, 0, n) {
    if (s[i] == 'W') flag = true;
    if (s[i] == 'R' && i >= count && flag) result++;
  }
  cout << result << endl;
}

