#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  rep(i, 0, n) {
    if (s[i] == 'n' && s[i + 1] == 'a') cout << "ny";
    else cout << s[i];
  }
  cout << endl;
}

