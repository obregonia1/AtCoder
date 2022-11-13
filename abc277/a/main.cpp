#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, x;
  cin >> n >> x;
  int p[n];
  for(auto& pi : p) cin >> pi;
  rep(i, 0, n) {
    if (p[i] == x) cout << i + 1 << endl;
  }
}

