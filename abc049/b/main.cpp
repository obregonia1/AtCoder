#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> c(h);
  rep(i, 0, h) cin >> c[i];
  rep(i, 0, h) {
    rep(k, 0, 2) {
          cout << c[i] << endl;
    }
  }
}
