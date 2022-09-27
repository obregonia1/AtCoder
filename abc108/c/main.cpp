#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  long long result = 0;
  int m0 = 0;
  rep(i, 1, n + 1) if (i % m == 0) m0++;
  result = m0 * m0 * m0;

  if (m % 2 == 0) {
    int c = 0;
    rep(i, 1, n + 1) if (i % m == m / 2) c++;
    result += c * c * c;
  }
  cout << result << endl;
}
