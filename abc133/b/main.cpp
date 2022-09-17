#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool isSquare(long long n) {
  long long d = (long long)sqrt(n) - 1;
  while (d * d < n) d++;
  return d * d == n;
}

int main() {
  int n, d, x[10][10];
  cin >> n >> d;
  int result = 0;
  rep(i, n) {
    rep(j, d) {
      cin >> x[i][j];
    }
  }
  rep(i, n) {
    for(int j = i + 1; j < n; j++) {
      int dd = 0;
      rep(k, d) dd += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      if (isSquare(dd)) result++;
    }
  }
  cout << result << endl;
}
