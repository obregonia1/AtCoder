#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  string result = "";
  int count = 0;

  rep(i, 0, n) {
    if (count < k) {
      result += s[i];
    } else {
      result += 'x';
    }
    if (s[i] == 'o') count++;
  }

  cout << result << endl;
}

