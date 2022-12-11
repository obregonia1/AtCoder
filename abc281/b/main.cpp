#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;

  if (s.size() != 8) {
    cout << "No" << endl;
    return 0;
  }

  int i = stoi(s.substr(1, 6));
  if ((s[0] >= 'A' && s[0] <= 'Z') && (s[7] >= 'A' && s[7] <= 'Z') && (i >= 100000 && i <= 999999)) cout << "Yes" << endl;

  else cout << "No" << endl;
}

