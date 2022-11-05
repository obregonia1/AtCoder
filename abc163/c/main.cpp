#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector a(n, 0);
  rep(i, 1, n) {
    int ai;
    cin >> ai;
    a[ai - 1]++;
  }
  for(auto& ai : a) cout << ai << endl;
}

