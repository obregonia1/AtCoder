#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int result = 0;
  rep(i, 0, n) {
    if (s[i] != s[i + 1]) result++;
  }
  cout << result << endl;
}
