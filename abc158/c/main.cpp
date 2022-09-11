#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  rep(i, 10001) {
    int ai = i * 8 / 100;
    int bi = i * 10 / 100;
    if (a == ai && b == bi) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
