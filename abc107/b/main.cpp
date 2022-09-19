#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  for (auto& ai : a) cin >> ai;
  vector<int> hi;
  vector<int> wi;
  rep(i, 0, h) {
    bool b = false;
    rep(j, 0, w) {
      if (a[i][j] == '#') b = true;
    }
    if (b) hi.push_back(i);
  }
  rep(i, 0, w) {
    bool b = false;
    rep(j, 0, h) if (a[j][i] == '#') b = true;
    if (b) wi.push_back(i);
  }

  for (auto i = hi.begin(); i != hi.end(); i++) {
    for (auto j = wi.begin(); j != wi.end(); j++) {
      cout << a[*i][*j];
    }
    cout << '\n';
  }
  cout << '\n';
}
