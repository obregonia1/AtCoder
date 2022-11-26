#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  int result = 0;
  rep(i, 0, s.size()) {
    if (s[i] == 'v') result += 1;
    if (s[i] == 'w') result += 2;
  }

  cout << result << endl;
}

