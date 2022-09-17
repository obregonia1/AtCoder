#include <bits/stdc++.h>
using namespace std;
#define rep(i,a, b) for (int i = a; i < (b); ++i)

int main() {
  int s, t;
  cin >> s >>t;
  int result = 0;
  rep(i, 0, s + 1) rep(j, 0, s + 1) rep(k, 0, s + 1) {
    if (i + j + k > s) break;
    if (i * j * k > t) break;
    result++;
  }
  cout << result << endl;
}
