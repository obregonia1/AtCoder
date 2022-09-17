#include <bits/stdc++.h>
using namespace std;
#define rep(i,a, b) for (int i = a; i < (b); ++i)

int main() {
  vector<string> s(10);
  rep(i, 0, 10) cin >> s[i];
  int a;
  int b;
  int c;
  int d;
  bool flag = true;
  rep(i, 0, 10) rep(j, 0, 10) {
    if (flag && s[i][j] == '#') {
      a = i + 1;
      c = j + 1;
      flag = false;
    }
  } 
  flag = true;
  for(int i = 9; i >= 0; --i) {
    for(int j = 9; j >= 0; --j) {
      if (flag && s[i][j] == '#') {
        b = i + 1;
        d = j + 1;
        flag = false;
      }
    }
  }
  cout << a << ' ' << b << endl;
  cout << c << ' ' << d << endl;
}
