#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  string result;
  string tmp;
  rep(i, 0, s.size()) {
    if (i % 2 == 0) tmp = s[i];
    else {
      tmp = s[i] + tmp;
      result += tmp;
      tmp = "";
    }
  }

  cout << result << endl;
}

