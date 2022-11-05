#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  int result = -1;
  rep(i, 0, s.size()) {
    if (s[i] == 'a') result = i + 1;
  }

  cout << result << endl;
}

