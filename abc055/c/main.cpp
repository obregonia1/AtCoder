#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  ll n, m;
  cin >> n >> m;

  if (n == 1 && m == 1) cout << 0 << endl;
  else if (n * 2 >= m) cout << m / 2 << endl;
  else cout << n + (m - 2 * n) / 4 << endl;
}

